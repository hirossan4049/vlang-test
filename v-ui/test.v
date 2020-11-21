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
	gg.draw_empty_rounded_rect(100,100,35,15,5,gx.rgb(98,0,238))
	//gg.draw_empty_rect(i,i,100-i,100-i,gx.black)
 	sgl.c4b(98,0,238,255)
	x := f32(200)
	y := f32(100)
	w := f32(35)
	h := f32(15)
	radius := f32(5)
	sgl.begin_triangle_strip()

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

	sgl.begin_quads()
	sgl.v2f(lx,ly)
	sgl.v2f(rx,ry)
	sgl.v2f(rbx,rby)
	sgl.v2f(lbx,lby)
	sgl.end()

	btn_text_cfg := gx.TextCfg{
		color: gx.rgb(255, 255, 255)
		align: gx.align_left
	}
	tw, th := gg.text_size("押して")
	w2 := tw / 2
	h2 := th / 2
	bcx := int(x + width / 2)
	bcy := int(y + height / 2)

    gg.draw_text(int(bcx - w2), int(bcy - h2), "押して", btn_text_cfg)
	

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
