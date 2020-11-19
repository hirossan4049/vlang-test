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
        font_path: "/Users/unkonow/Library/Fonts/Cica-Regular.ttf"
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
    //gg.draw_circle(100, 300, 100, gx.red)
    //gg.draw_circle_with_segments(100, 300, 200, 20, gx.green)
    //gg.draw_rect(30,30,270,250, gx.red)
    //gg.draw_circle_with_segments(44,24,14,64,gx.red)

    //sgl.c4b(255, 0,0,255)
    ////sgl.begin_quads()
    //sgl.begin_line_strip()
    //sgl.v2f(30,30)
    //sgl.v2f(50,10)
    //sgl.v2f(280,10)
    //sgl.v2f(300,30)
    //sgl.v2f(300, 280)
    //sgl.v2f(280, 300)
    //sgl.v2f(50,300)
    //sgl.v2f(30,280)
    //sgl.v2f(30,30)
    ////sgl.v2f(30,30)
    //sgl.end()

	sgl.c4b(0,0,255,255)
	mut theta := f32(0)
	mut xx:= f32(0)
	mut yy:= f32(0)

	x := 100
	y := 100
	//r := 17
	r := 75
	sgl.begin_line_strip()

	theta = 2 * f32(math.pi) * 14 / 30
	xx = r * math.cosf(theta)
	sgl.v2f(x + xx, y + 200)
    // left top
	for i in 15..24{
		theta = 2 * f32(math.pi) * f32(i) / 30
		xx = r * math.cosf(theta)
		yy = r * math.sinf(theta)
		sgl.v2f(xx + x,yy + y)
	}
	sgl.v2f(x+200, yy + y)

	// right top
	rx := x+xx+200-r/2
	ry := yy + y + r
	for i in 25..30{
		theta = 2 * f32(math.pi) * f32(i) / 30
		xx = r * math.cosf(theta)
		yy = r * math.sinf(theta)
		sgl.v2f(xx + rx,yy + ry)
	}

	sgl.v2f(xx+rx,y + 200)

	// right bottom
	rbx := rx
	rby := ry + 200
	for i in 30..39{
		theta = 2 * f32(math.pi) * f32(i) / 30
		xx = r * math.cosf(theta)
		yy = r * math.sinf(theta)
		sgl.v2f(xx + rbx,yy + rby)
	}
	sgl.v2f(xx + x,rby+yy)

	lx := x
	ly := ry + 200
	for i in 40..46{
		theta = 2 * f32(math.pi) * f32(i) / 30
		xx = r * math.cosf(theta)
		yy = r * math.sinf(theta)
		sgl.v2f(xx + lx,yy + ly)
	}


	sgl.end()

    //gg.draw_circle_with_segments(100,100,32,5,gx.red)

    //gg.draw_arc(32,32,10,4,44,2,gx.red)
    //gg.draw_line(3,6,3,50,gx.red)
}
