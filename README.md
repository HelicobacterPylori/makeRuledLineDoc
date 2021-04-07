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

![構想図](https://raw.githubusercontent.com/HelicobacterPylori/makeRuledLineDoc/de8e41c20571e1a3131d8e4d9b5f5dc6adc7c271/fig/fig1.svg)

## 要求事項

+ Qt 5.15.2
+ PDF
  + 当面は別途用意
+ markdown
  + 当面はVS Codeとかで作成。

## 課題（ToDo）

+ ソースの初期構造決定
  + サンプルをコピペして、`QPdfWriter`が動くのを確認した。
+ 以下のどちらで実装するか？
  1. 力技で、markdown→pdf
  2. 無難？に、markdown→html→pdf
+ markdown→html→pdfが無難だと実感してきた。
+ 所定の領域にレンダリングさせるのは、マージン制御だけで出来そうだが、それだけで済むのか？
+ これ以上はプロトタイプをコーディングしながら試行錯誤かな？
+ 