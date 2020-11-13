module vuipy

import ui
import os

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
	run()
}

pub fn run() {
	mut app := &App{}
	app.window = ui.window({
		width: win_width
		height: win_height
		title: 'Counter'
		state: app
	}, [
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
				width: 50
				height: 75
				//icon_path: os.resource_abs_path('plus.png')
				text: 'press me'
				onclick: btn_count_click
			}),
		]),
	])
	ui.run(app.window)
}


fn btn_count_click(mut app App, btn &ui.Button) {
	app.counter = (app.counter.int() + 1).str()
    println("clicked! $app.counter")
}
