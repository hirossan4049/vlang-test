import ui
import os
import math

import gg
import gx
import sokol.sgl


const (
    win_width  = 500
    win_height = 500
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
        title: 'Crap canvas'
        state: app
        font_path: "/Library/Fonts/SF-Pro-Display-Light.otf"
    }, [
        ui.canvas({
            height: 500
            width: 500
            draw_fn: canvas_draw
        })
    ])
    ui.run(app.window)
}

fn btn_count_click(mut app App, btn &ui.Button) {
    app.counter = (app.counter.int() + 1).str()
}

fn canvas_draw(gg &gg.Context, app &App) {
	sgl.c4b(255,0,0,255)
	mut theta := f32(0)
	mut xx:= f32(0)
	mut yy:= f32(0)
	r := 100 * gg.scale
	x := 100 * gg.scale
	y := 100 * gg.scale
	width := 100 * gg.scale
	height := 100 * gg.scale
	segments := f32(36)
	
	sgl.begin_line_strip()

    // left top
	lx := x + r
	ly := y + r
	for i in 18..27{
		theta = 2 * f32(math.pi) * f32(i) / segments
		xx = r * math.cosf(theta)
		yy = r * math.sinf(theta)
		sgl.v2f(xx + lx,yy + ly)
	}
	// right top
	mut rx := x + 2*width - r
	mut ry := y + r
	for i in 27..36{
		theta = 2 * f32(math.pi) * f32(i) / segments
		xx = r * math.cosf(theta)
		yy = r * math.sinf(theta)
		sgl.v2f(xx + rx,yy + ry)
	}
	// right bottom
	mut rbx := rx
	mut rby := y + 2*height - r
	for i in 1..9{
		theta = 2 * f32(math.pi) * f32(i) / segments
		xx = r * math.cosf(theta)
		yy = r * math.sinf(theta)
		sgl.v2f(xx + rbx,yy + rby)
	}
	// left bottom
	mut lbx := lx
	mut lby := y + 2*height - r
	for i in 10..18{
		theta = 2 * f32(math.pi) * f32(i) / segments
		xx = r * math.cosf(theta)
		yy = r * math.sinf(theta)
		sgl.v2f(xx + lbx,yy + lby)
	}
	sgl.v2f(lx + xx, ly)

	sgl.end()
}
