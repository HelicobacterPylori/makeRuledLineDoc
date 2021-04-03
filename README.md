# makeRuledLineDoc

markdownで作った文章や図を、決まった様式に当てはめてPDF化するアプリを作成中。

差分管理できないWordやExcelでのドキュメント作成にうんざりしているので、なんとかできないかやってみる。

## 構想

### 設定アプリ

様式.pdfを画面表示し、領域・文字サイズなどを設定するGUIアプリ。

+ 入力
  + 様式.pdf
  + 設定.json
+ 出力
  + 設定.json

### 作成アプリ

設定.jsonを元に、文書.mdや図を様式.pdfの上に組み込んでいくCUIアプリ。最終的には設定アプリと一本化できるとうれしいけど。

+ 入力
  + 様式.pdf
  + 設定.json
  + 文章.md
  + 図.png/jpg/svg
+ 出力
  + 完成.pdf

### 構想図

>>>T.B.D

## 要求事項

+ Qt (Ver.は様検討)
+ PDF
  + 当面は別途用意
+ markdown
  + 当面はVS Codeとかで作成。

## 課題（ToDo）

+ QtのVer.決定と初期構造決定
  + `QPdfWriter`くらいは使えないと話にならない・・
+ 以下のどちらで実装するか？
  1. 力技で、markdown→pdf
  2. 無難？に、markdown→html→pdf
