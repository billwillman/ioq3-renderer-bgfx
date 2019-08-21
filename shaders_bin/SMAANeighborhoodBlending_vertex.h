
static const uint8_t SMAANeighborhoodBlending_vertex_gl[452] =
{
	0x56, 0x53, 0x48, 0x06, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x69, 0xa1, 0xba, 0x02, 0x00, 0x0f, 0x75, // VSH......i.....u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, // _modelViewProj..
	0x00, 0x00, 0x01, 0x00, 0x0d, 0x75, 0x5f, 0x53, 0x6d, 0x61, 0x61, 0x4d, 0x65, 0x74, 0x72, 0x69, // .....u_SmaaMetri
	0x63, 0x73, 0x02, 0x01, 0x00, 0x00, 0x01, 0x00, 0x87, 0x01, 0x00, 0x00, 0x69, 0x6e, 0x20, 0x76, // cs..........in v
	0x65, 0x63, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, // ec3 a_position;.
	0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // in vec4 a_texcoo
	0x72, 0x64, 0x30, 0x3b, 0x0a, 0x6f, 0x75, 0x74, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, // rd0;.out vec2 v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x6f, 0x75, 0x74, 0x20, 0x76, // texcoord0;.out v
	0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x32, 0x3b, // ec4 v_texcoord2;
	0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, // .uniform mat4 u_
	0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x75, // modelViewProj;.u
	0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x53, 0x6d, // niform vec4 u_Sm
	0x61, 0x61, 0x4d, 0x65, 0x74, 0x72, 0x69, 0x63, 0x73, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, // aaMetrics;.void 
	0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x74, 0x65, // main ().{.  v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, // xcoord0 = a_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x74, 0x65, // oord0.xy;.  v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x32, 0x20, 0x3d, 0x20, 0x28, 0x28, 0x75, 0x5f, 0x53, 0x6d, // xcoord2 = ((u_Sm
	0x61, 0x61, 0x4d, 0x65, 0x74, 0x72, 0x69, 0x63, 0x73, 0x2e, 0x78, 0x79, 0x78, 0x79, 0x20, 0x2a, // aaMetrics.xyxy *
	0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x31, 0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, //  vec4(1.0, 0.0, 
	0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x29, 0x20, 0x2b, 0x20, 0x61, 0x5f, 0x74, // 0.0, 1.0)) + a_t
	0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x79, 0x78, 0x79, 0x29, 0x3b, 0x0a, // excoord0.xyxy);.
	0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, //   vec4 tmpvar_1;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, // .  tmpvar_1.w = 
	0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, // 1.0;.  tmpvar_1.
	0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, // xyz = a_position
	0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, // ;.  gl_Position 
	0x3d, 0x20, 0x28, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, // = (u_modelViewPr
	0x6f, 0x6a, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, // oj * tmpvar_1);.
	0x7d, 0x0a, 0x0a, 0x00,                                                                         // }...
};

static const uint8_t SMAANeighborhoodBlending_vertex_d3d11[636] =
{
	0x56, 0x53, 0x48, 0x06, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x69, 0xa1, 0xba, 0x02, 0x00, 0x0f, 0x75, // VSH......i.....u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x00, // _modelViewProj..
	0x00, 0x00, 0x04, 0x00, 0x0d, 0x75, 0x5f, 0x53, 0x6d, 0x61, 0x61, 0x4d, 0x65, 0x74, 0x72, 0x69, // .....u_SmaaMetri
	0x63, 0x73, 0x02, 0x00, 0x40, 0x00, 0x01, 0x00, 0x38, 0x02, 0x00, 0x00, 0x44, 0x58, 0x42, 0x43, // cs..@...8...DXBC
	0x0c, 0xc1, 0xc3, 0x2e, 0xe0, 0x9a, 0x36, 0x16, 0x8d, 0x46, 0xe0, 0x8a, 0xd1, 0x33, 0xc4, 0xa5, // ......6..F...3..
	0x01, 0x00, 0x00, 0x00, 0x38, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, // ....8.......,...
	0x80, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x4c, 0x00, 0x00, 0x00, // ........ISGNL...
	0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........8.......
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, // ................
	0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // A...............
	0x01, 0x00, 0x00, 0x00, 0x0f, 0x03, 0x00, 0x00, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, // ........POSITION
	0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, 0x4f, 0x53, 0x47, 0x4e, // .TEXCOORD...OSGN
	0x68, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, // h...........P...
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x0f, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x0c, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, // ................
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // ................
	0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, // ....SV_POSITION.
	0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, 0xab, 0x53, 0x48, 0x45, 0x58, // TEXCOORD....SHEX
	0x40, 0x01, 0x00, 0x00, 0x50, 0x00, 0x01, 0x00, 0x50, 0x00, 0x00, 0x00, 0x6a, 0x08, 0x00, 0x01, // @...P...P...j...
	0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, // Y...F. .........
	0x5f, 0x00, 0x00, 0x03, 0x72, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, // _...r......._...
	0x32, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x04, 0xf2, 0x20, 0x10, 0x00, // 2.......g.... ..
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0x32, 0x20, 0x10, 0x00, // ........e...2 ..
	0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, // ....e.... ......
	0x68, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0xf2, 0x00, 0x10, 0x00, // h.......8.......
	0x00, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, // ....V.......F. .
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, // ........2.......
	0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ....F. .........
	0x06, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ........F.......
	0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, // 2...........F. .
	0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xa6, 0x1a, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xf2, 0x20, 0x10, 0x00, // F............ ..
	0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, // ....F.......F. .
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x32, 0x20, 0x10, 0x00, // ........6...2 ..
	0x01, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0d, // ....F.......2...
	0xf2, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x84, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // . ......F. .....
	0x04, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, // .....@.....?....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x46, 0x14, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // .......?F.......
	0x3e, 0x00, 0x00, 0x01, 0x00, 0x02, 0x01, 0x00, 0x10, 0x00, 0x50, 0x00,                         // >.........P.
};

static const uint8_t SMAANeighborhoodBlending_vertex_vk[1560] =
{
	0x56, 0x53, 0x48, 0x06, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x69, 0xa1, 0xba, 0x02, 0x00, 0x0f, 0x75, // VSH......i.....u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, // _modelViewProj..
	0x00, 0x00, 0x04, 0x00, 0x0d, 0x75, 0x5f, 0x53, 0x6d, 0x61, 0x61, 0x4d, 0x65, 0x74, 0x72, 0x69, // .....u_SmaaMetri
	0x63, 0x73, 0x02, 0x01, 0x40, 0x00, 0x01, 0x00, 0xd4, 0x05, 0x00, 0x00, 0x03, 0x02, 0x23, 0x07, // cs..@.........#.
	0x00, 0x00, 0x01, 0x00, 0x07, 0x00, 0x08, 0x00, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, // ................
	0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, // GLSL.std.450....
	0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x0a, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, // ........main....
	0x52, 0x00, 0x00, 0x00, 0x56, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x00, 0x63, 0x00, 0x00, 0x00, // R...V..._...c...
	0x66, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, // f...............
	0x05, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, // ........main....
	0x05, 0x00, 0x04, 0x00, 0x19, 0x00, 0x00, 0x00, 0x24, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x00, // ........$Global.
	0x06, 0x00, 0x07, 0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, // ............u_mo
	0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x06, 0x00, 0x07, 0x00, // delViewProj.....
	0x19, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x53, 0x6d, 0x61, 0x61, 0x4d, 0x65, // ........u_SmaaMe
	0x74, 0x72, 0x69, 0x63, 0x73, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0x1b, 0x00, 0x00, 0x00, // trics...........
	0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x52, 0x00, 0x00, 0x00, 0x61, 0x5f, 0x70, 0x6f, // ........R...a_po
	0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x56, 0x00, 0x00, 0x00, // sition......V...
	0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00, 0x0a, 0x00, // a_texcoord0.....
	0x5f, 0x00, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, // _...@entryPointO
	0x75, 0x74, 0x70, 0x75, 0x74, 0x2e, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, // utput.gl_Positio
	0x6e, 0x00, 0x00, 0x00, 0x05, 0x00, 0x0a, 0x00, 0x63, 0x00, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, // n.......c...@ent
	0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x2e, 0x76, 0x5f, // ryPointOutput.v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x00, 0x00, 0x05, 0x00, 0x0a, 0x00, // texcoord0.......
	0x66, 0x00, 0x00, 0x00, 0x40, 0x65, 0x6e, 0x74, 0x72, 0x79, 0x50, 0x6f, 0x69, 0x6e, 0x74, 0x4f, // f...@entryPointO
	0x75, 0x74, 0x70, 0x75, 0x74, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // utput.v_texcoord
	0x32, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 2...H...........
	0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ....H...........
	0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x19, 0x00, 0x00, 0x00, // #.......H.......
	0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, // ............H...
	0x19, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, // ........#...@...
	0x47, 0x00, 0x03, 0x00, 0x19, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, // G...........G...
	0x1b, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, // ....".......G...
	0x1b, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, // ....!.......G...
	0x52, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, // R...........G...
	0x56, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, // V...........G...
	0x5f, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, // _...........G...
	0x63, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, // c...........G...
	0x66, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, // f...............
	0x02, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // ....!...........
	0x16, 0x00, 0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, // ........ .......
	0x07, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, // ................
	0x09, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, // ................
	0x10, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x18, 0x00, 0x04, 0x00, // ................
	0x18, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x04, 0x00, // ................
	0x19, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, // ............ ...
	0x1a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, // ............;...
	0x1a, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, // ................
	0x1c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, // .... .......+...
	0x1c, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, // ............ ...
	0x1e, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, // ............+...
	0x06, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x2b, 0x00, 0x04, 0x00, // ...."......?+...
	0x06, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x07, 0x00, // ....#.......,...
	0x09, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, // ....$..."...#...
	0x23, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x1c, 0x00, 0x00, 0x00, // #..."...+.......
	0x3b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x41, 0x00, 0x00, 0x00, // ;....... ...A...
	0x02, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x51, 0x00, 0x00, 0x00, // ........ ...Q...
	0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x51, 0x00, 0x00, 0x00, // ........;...Q...
	0x52, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x55, 0x00, 0x00, 0x00, // R....... ...U...
	0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x55, 0x00, 0x00, 0x00, // ........;...U...
	0x56, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x5e, 0x00, 0x00, 0x00, // V....... ...^...
	0x03, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x5e, 0x00, 0x00, 0x00, // ........;...^...
	0x5f, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x62, 0x00, 0x00, 0x00, // _....... ...b...
	0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x62, 0x00, 0x00, 0x00, // ........;...b...
	0x63, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x5e, 0x00, 0x00, 0x00, // c.......;...^...
	0x66, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x03, 0x00, 0x07, 0x00, 0x00, 0x00, // f...............
	0xbd, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // ....6...........
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, // ................
	0x3d, 0x00, 0x04, 0x00, 0x10, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, 0x52, 0x00, 0x00, 0x00, // =.......S...R...
	0x3d, 0x00, 0x04, 0x00, 0x09, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0x56, 0x00, 0x00, 0x00, // =.......W...V...
	0x41, 0x00, 0x05, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x9b, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, // A...............
	0x1d, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x09, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, // ....=...........
	0x9b, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x09, 0x00, 0x09, 0x00, 0x00, 0x00, 0x9d, 0x00, 0x00, 0x00, // ....O...........
	0x9c, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x09, 0x00, 0x09, 0x00, 0x00, 0x00, // ........O.......
	0x9f, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0xbd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ....W...........
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x08, 0x00, // ................
	0x09, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, // ............2...
	0x9d, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x9f, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x07, 0x00, // ....$.......O...
	0x07, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, 0x57, 0x00, 0x00, 0x00, // ........W...W...
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, // ........Q.......
	0x8e, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, // ....S.......Q...
	0x06, 0x00, 0x00, 0x00, 0x8f, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ........S.......
	0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, // Q...........S...
	0x02, 0x00, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x09, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x00, // ....P...........
	0x8e, 0x00, 0x00, 0x00, 0x8f, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, // ............"...
	0x41, 0x00, 0x05, 0x00, 0x41, 0x00, 0x00, 0x00, 0x92, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, // A...A...........
	0x3b, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x18, 0x00, 0x00, 0x00, 0x93, 0x00, 0x00, 0x00, // ;...=...........
	0x92, 0x00, 0x00, 0x00, 0x90, 0x00, 0x05, 0x00, 0x09, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, // ................
	0x91, 0x00, 0x00, 0x00, 0x93, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, // ........Q.......
	0x97, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x04, 0x00, // ................
	0x06, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x97, 0x00, 0x00, 0x00, 0x52, 0x00, 0x06, 0x00, // ............R...
	0x09, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, // ................
	0x01, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x5f, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x00, 0x00, // ....>..._.......
	0x3e, 0x00, 0x03, 0x00, 0x63, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, // >...c.......>...
	0x66, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, // f...........8...
	0x00, 0x02, 0x01, 0x00, 0x10, 0x00, 0x50, 0x00,                                                 // ......P.
};
