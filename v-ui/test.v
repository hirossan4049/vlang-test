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
	frame f32 = 1
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

[live]
fn canvas_draw(gg &gg.Context,mut app &App) {
	//gg.draw_empty_rounded_rect(2*i,2*i,100-i,100-i,i,gx.black)
	//gg.draw_empty_rect(i,i,100-i,100-i,gx.black)
 	sgl.c4b(0,255,0,255)
	x := f32(100)
	y := f32(100)
	w := f32(200)
	h := f32(200)
	radius := f32(5)
	sgl.begin_triangle_strip()
	//for i in 0..segments{
	//	theta = 2.0 * f32(math.pi) * f32(i) / f32(segments)
	//	xx = r * math.cosf(theta)
	//	yy = r * math.sinf(theta)
	//	sgl.v2f(xx + x, yy + y)
	//	sgl.v2f(x, y)
	//	if i == 64/4{
	//		break
	//	}
	//}
	//sgl.end()
	//gg.draw_rect(100,100,200,200,gx.red)

	mut theta := f32(0)
	mut xx := f32(0)
	mut yy := f32(0)
	r := radius * f32(gg.scale)
	nx := x * f32(gg.scale)
	ny := y * f32(gg.scale)
	width := w * f32(gg.scale)
	height := h * f32(gg.scale)
	segments := 2 * math.pi * r
	segdiv := segments / 4
	rb := 0
	lb := int(rb + segdiv)
	lt := int(lb + segdiv)
	rt := int(lt + segdiv)
	// left top
	lx := nx + r
	ly := ny + r
	for i in lt .. rt {
		theta = 2 * f32(math.pi) * f32(i) / segments
		xx = r * math.cosf(theta)
		yy = r * math.sinf(theta)
		sgl.v2f(xx + lx, yy + ly)
		sgl.v2f(lx,ly)
	}
	// right top
	mut rx := nx + 2 * width - r
	mut ry := ny + r
	for i in rt .. int(segments) {
		theta = 2 * f32(math.pi) * f32(i) / segments
		xx = r * math.cosf(theta)
		yy = r * math.sinf(theta)
		sgl.v2f(xx + rx, yy + ry)
		sgl.v2f(rx,ry)
	}
	// right bottom
	mut rbx := rx
	mut rby := ny + 2 * height - r
	for i in rb .. lb {
		theta = 2 * f32(math.pi) * f32(i) / segments
		xx = r * math.cosf(theta)
		yy = r * math.sinf(theta)
		sgl.v2f(xx + rbx, yy + rby)
		sgl.v2f(rbx,rby)
	}
	// left bottom
	mut lbx := lx
	mut lby := ny + 2 * height - r
	for i in lb .. lt {
		theta = 2 * f32(math.pi) * f32(i) / segments
		xx = r * math.cosf(theta)
		yy = r * math.sinf(theta)
		sgl.v2f(xx + lbx, yy + lby)
		sgl.v2f(lbx,lby)
	}
	sgl.v2f(lx + xx, ly)
	sgl.v2f(lx, ly)
	sgl.end()
	gg.draw_rect(lx/gg.scale,ly/gg.scale,width-r,height-r,gx.green)

}


//pub fn draw_empty_rounded_rect() {
//	gg.draw_rect(100,100,180,130,gx.red)
//
//	sgl.c4b(0,255,0,255)
//	mut theta := f32(0)
//	mut xx:= f32(0)
//	mut yy:= f32(0)
//	r := 10 * gg.scale
//	x := 101 * gg.scale
//	y := 100 * gg.scale
//	width := 80 * gg.scale
//	height := 30 * gg.scale
//	segments := f32(36)
//	
//	sgl.begin_line_strip()
//
//    // left top
//	lx := x + r
//	ly := y + r
//	for i in 18..27{
//		theta = 2 * f32(math.pi) * f32(i) / segments
//		xx = r * math.cosf(theta)
//		yy = r * math.sinf(theta)
//		sgl.v2f(xx + lx,yy + ly)
//	}
//	// right top
//	mut rx := x + 2*width - r
//	mut ry := y + r
//	for i in 27..36{
//		theta = 2 * f32(math.pi) * f32(i) / segments
//		xx = r * math.cosf(theta)
//		yy = r * math.sinf(theta)
//		sgl.v2f(xx + rx,yy + ry)
//	}
//	// right bottom
//	mut rbx := rx
//	mut rby := y + 2*height - r
//	for i in 1..9{
//		theta = 2 * f32(math.pi) * f32(i) / segments
//		xx = r * math.cosf(theta)
//		yy = r * math.sinf(theta)
//		sgl.v2f(xx + rbx,yy + rby)
//	}
//	// left bottom
//	mut lbx := lx
//	mut lby := y + 2*height - r
//	for i in 10..18{
//		theta = 2 * f32(math.pi) * f32(i) / segments
//		xx = r * math.cosf(theta)
//		yy = r * math.sinf(theta)
//		sgl.v2f(xx + lbx,yy + lby)
//	}
//	sgl.v2f(lx + xx, ly)
//
//	sgl.end()
//}
