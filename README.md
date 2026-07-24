# gbs-control（フォーク版）

これは [ramapcsx2/gbs-control](https://github.com/ramapcsx2/gbs-control)（Tvia Trueview5725搭載のアップスケーラー/ビデオコンバーター基板向け代替ファームウェア）のフォークである。オリジナルのREADMEは [README_original.md](README_original.md) にそのまま保存している。

## このフォークでの変更点

SNK MVS/AESの同期問題（upstream Issue #118 / #216）を修正した。2019〜2020年の2つのコミットに起因する、Neo Geoのserrationなし複合同期信号に対するteardownループと縦揺れが原因。該当する `PLLAD_ICP` / `SP_POST_COAST` の設定を復元し、264ラインのserrationなしCsync信号（MVS/AES）向けの専用同期ゲートを追加した。本家へも [Pull Request](https://github.com/ramapcsx2/gbs-control/pull/686) を提出済み。

ビルド済みファームウェアは [Releases](../../releases) から入手できる。

## OTAアップデート

ファームウェアはESP8266標準の[ArduinoOTA](https://github.com/esp8266/Arduino/blob/master/tools/espota.py)プロトコルで無線更新できる（`espota.py`相当、LAN内でPCから直接転送する方式）。Windows向けにGUIツール [tceoo1/espota](https://github.com/tceoo1/espota) を用意した（[Releases](https://github.com/tceoo1/espota/releases)から`espota-gui.exe`をダウンロード可能）。mDNSによるデバイス自動検出に対応している。
