import ui
//import os
import gx


const (
	win_width  = 400
	win_height = 200
)

struct App {
mut:
	counter string = '0'
	window  &ui.Window = 0
}

fn main() {
	mut app := &App{}
	app.window = ui.window({
		width: win_width
		height: win_height
		title: 'Counter'
		state: app
		bg_color: gx.white
	}, [
		ui.label({
			text: "hahha"
		}),
		ui.row({
			alignment: .center
			spacing: 10
			stretch: true
			margin: ui.MarginConfig{5, 5, 5, 5}
		}, [

			ui.column({
				width: 200
				alignment: .center
				spacing: 20
			}, [
				ui.label({
					text: "hello"
				}),
				ui.label({
					text: "hello"
				}),
				ui.label({
					text: "hello"
				}),
			])


			ui.textbox({
				max_len: 20
				read_only: true
				is_numeric: true
				text: &app.counter
			}),
			ui.button({
				width: 300
				height: 100
				//icon_path: os.resource_abs_path('plus.png')
				text: 'press me'
				onclick: btn_count_click
			}),
		]),
	])
	//println(app.window.children[0].text)
	ui.run(app.window)
}

fn btn_count_click(mut app App, btn &ui.Button) {
	app.counter = (app.counter.int() + 1).str()
    println("clicked! $app.counter")
}
