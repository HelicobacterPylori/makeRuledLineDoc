# makeRuledLineDoc

markdownで作った文章や図を、決まった様式に当てはめてPDF化するアプリを作成中。

差分管理できないWordやExcelでのドキュメント作成にうんざりしているので、なんとかできないかやってみる。

## 構想

### 設定アプリ

様式ファイルを画面表示し、領域・文字サイズなどを設定ファイルに設定するGUIアプリ。

+ 入力
  + 様式ファイル（pdf/png/svg）
  + 設定ファイル（json）
+ 出力
  + 設定ファイル（json）

### 作成アプリ

設定ファイルを元に、文書ファイルや図ファイルを様式ファイルの上に配置し、完成ファイルを出力するCUIアプリ。最終的には設定アプリと一本化できるとうれしいけど。

+ 入力
  + 様式ファイル（pdf/png/svg）
  + 設定ファイル（json）
  + 文章ファイル（md）
  + 図ファイル（png/jpg/svg）
+ 出力
  + 完成ファイル（pdf）

### 構想図

![構想図](https://github.com/HelicobacterPylori/makeRuledLineDoc/blob/main/fig/fig1.png?raw=true)

### 設定ファイル

![設定ファイル](https://github.com/HelicobacterPylori/makeRuledLineDoc/blob/main/fig/fig2.png?raw=true)

## 要求事項

+ Qt 5.15
+ PDF
  + 当面は別途用意
  + 表示などに、popplerを使用。
+ markdown。
  + 当面はVS Codeとかで作成。

## 課題（ToDo）

+ [ ] ソースの初期構造決定
+ [x] サンプルをコピペして、`QPdfWriter`が動くのを確認した。
+ [ ] 所定の領域にレンダリングさせるのは、マージン制御だけで出来そうだが、それだけで済むのか？
+ [ ] これ以上はプロトタイプをコーディングしながら試行錯誤かな？
+ [ ] `QWebEnginePage`は使いにくそうなので、とりあえず見送り。
+ [x] `QPrinter`で出来そう。
  + [x] `setMarkdown`でmarkdown使えるけど、機能が少ない。
  + [ ] 画像とかCSSは、`addResource`が必要。
  + [ ] 複数テキストの重ね合わせが面倒…。

## 試行

+ PDF作成PGに必要な要素
  + [x] （2021/4/11済）htmlを読み込み、レンダリング後PDFファイル出力。
  + [x] （2021/4/14済）マージンを調整する。
  + [ ] 外部からPDF取り込む。
     + [ ] QGraphcsViewの使い方を思い出す。
     + [ ] popplerを使い、PDFをQImageで表示。
  + [ ] 外部からCSSを取り込む。
+ 領域設定PGMに必要な要素
  + [ ] 設定を扱うConfigクラス実装
  + [ ] pngファイルを背景表示して、GUIで領域設定し、jsonファイル出力。
