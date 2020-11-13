# V lang test

なんか面白そうな言語だったのでテスト。自分が見返す用。

このリポジトリを見ているあなたは黙って公式のexample見ることをおすすめする。

## TODO

- [x] 文字が表示されない。`"SFNS-bold.ttf"` がないって言われる。
- [x] Pythonで呼んでみる

## MEMO

[vlangコードを.so~(ry](https://qiita.com/syoyo/items/52d6b720393a72b3b5d9)
Pythonで呼べるっぽい。面白そう。


# LICENSE

this repository is under the WTFPL.

<a href="http://www.wtfpl.net/"><img
       src="http://www.wtfpl.net/wp-content/uploads/2012/12/wtfpl-badge-4.png"
       width="80" height="15" alt="WTFPL" /></a>


# 解決済み

## 文字が表示されない

適当なフォント.ttfを同じディレクトリに配置

ui.windowに

```v
font_path: os.resource_abs_path('<FontName>.ttf')
```

を追加。

なお絶対パスで指定できない模様。誰かプルリクだして（）



