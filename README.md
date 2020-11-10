# V lang test

なんか面白そうな言語だったのでテスト。自分が見返す用。

このリポジトリを見ているあなたは黙って公式のexample見たほうがいいかも。

## TODO

自分で修正しないといけないパティーン？

```
.vmodules/ui/window.v:171:42: error: unknown function: gg.system_font_path
  169 |         event_fn: on_event
  170 |         user_data: window
  171 |         font_path: if cfg.font_path == '' { gg.system_font_path() } else { cfg.font_path }
      |                                                ~~~~~~~~~~~~~~~~~~
  172 |         init_fn: gg_init
  173 |         //keydown_fn: window_key_down
```


# LICENSE

this repository is under the WTFPL.

<a href="http://www.wtfpl.net/"><img
       src="http://www.wtfpl.net/wp-content/uploads/2012/12/wtfpl-badge-4.png"
       width="80" height="15" alt="WTFPL" /></a>


