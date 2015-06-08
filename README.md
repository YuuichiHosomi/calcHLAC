# calcHLAC
私しか得しないかもしれない画像からHLACを抽出する計算機

一応コマンドラインオプションを書いとくね♪

作っていて思ったけど、GUIなフロントエンドが必要な感があるので、気が進まなくても作るつもり


## やってること
1. 入力画像を8bitGrayscaleに変換
2. 二値化
3. HLACを適当に計算
4. 標準出力にCSVで出力


## コマンドラインオプション
### --input \<string\>
入力ファイル名を指定

`-i`でも可能


### --calc_area \<int\>,\<int\>,\<int\>,\<int\> 
指定した領域のHLACを計算する。未指定なら画像全体のHLACを演算する。

`x,y,width,height` のフォーマットで指定する

範囲は複数指定可能

`-a`でも可能


### --step_size \<int\>
HLAC演算時のステップサイズを指定する。未指定なら`1`



## Lisence

MIT
