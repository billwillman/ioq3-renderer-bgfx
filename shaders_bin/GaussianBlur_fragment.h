
static const uint8_t GaussianBlur_fragment_gl[983] =
{
	0x46, 0x53, 0x48, 0x06, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0a, 0x75, // FSH.o.><.......u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, 0x02, 0x01, 0x00, 0x00, 0x01, 0x00, 0x10, // _viewRect.......
	0x75, 0x5f, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, // u_TextureSampler
	0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x17, 0x75, 0x5f, 0x47, 0x75, 0x61, 0x73, 0x73, 0x69, 0x61, // .......u_Guassia
	0x6e, 0x42, 0x6c, 0x75, 0x72, 0x44, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x02, 0x01, // nBlurDirection..
	0x00, 0x00, 0x01, 0x00, 0x7e, 0x03, 0x00, 0x00, 0x69, 0x6e, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, // ....~...in vec2 
	0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, // v_texcoord0;.uni
	0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, // form vec4 u_view
	0x52, 0x65, 0x63, 0x74, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, // Rect;.uniform sa
	0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x75, 0x5f, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, // mpler2D u_Textur
	0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, // eSampler;.unifor
	0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x47, 0x75, 0x61, 0x73, 0x73, 0x69, 0x61, // m vec4 u_Guassia
	0x6e, 0x42, 0x6c, 0x75, 0x72, 0x44, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, // nBlurDirection;.
	0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, // void main ().{. 
	0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, //  vec4 color_1;. 
	0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, //  vec2 tmpvar_2;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x28, 0x76, 0x65, //   tmpvar_2 = (ve
	0x63, 0x32, 0x28, 0x31, 0x2e, 0x33, 0x38, 0x34, 0x36, 0x31, 0x35, 0x2c, 0x20, 0x31, 0x2e, 0x33, // c2(1.384615, 1.3
	0x38, 0x34, 0x36, 0x31, 0x35, 0x29, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x47, 0x75, 0x61, 0x73, 0x73, // 84615) * u_Guass
	0x69, 0x61, 0x6e, 0x42, 0x6c, 0x75, 0x72, 0x44, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, // ianBlurDirection
	0x2e, 0x78, 0x79, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x6d, 0x70, // .xy);.  vec2 tmp
	0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // var_3;.  tmpvar_
	0x33, 0x20, 0x3d, 0x20, 0x28, 0x76, 0x65, 0x63, 0x32, 0x28, 0x33, 0x2e, 0x32, 0x33, 0x30, 0x37, // 3 = (vec2(3.2307
	0x36, 0x39, 0x2c, 0x20, 0x33, 0x2e, 0x32, 0x33, 0x30, 0x37, 0x36, 0x39, 0x29, 0x20, 0x2a, 0x20, // 69, 3.230769) * 
	0x75, 0x5f, 0x47, 0x75, 0x61, 0x73, 0x73, 0x69, 0x61, 0x6e, 0x42, 0x6c, 0x75, 0x72, 0x44, 0x69, // u_GuassianBlurDi
	0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x2e, 0x78, 0x79, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x63, // rection.xy);.  c
	0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, // olor_1 = (textur
	0x65, 0x20, 0x28, 0x75, 0x5f, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, // e (u_TextureSamp
	0x6c, 0x65, 0x72, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, // ler, v_texcoord0
	0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x32, 0x32, 0x37, 0x30, 0x32, 0x37, 0x29, 0x3b, 0x0a, 0x20, // ) * 0.227027);. 
	0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x63, 0x6f, 0x6c, 0x6f, //  color_1 = (colo
	0x72, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, // r_1 + (texture (
	0x75, 0x5f, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, // u_TextureSampler
	0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2b, // , (v_texcoord0 +
	0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, //  .    (tmpvar_2 
	0x2f, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, 0x2e, 0x7a, 0x77, 0x29, // / u_viewRect.zw)
	0x0a, 0x20, 0x20, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x33, 0x31, 0x36, 0x32, 0x31, 0x36, // .  )) * 0.316216
	0x32, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, // 2));.  color_1 =
	0x20, 0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x28, 0x74, 0x65, 0x78, //  (color_1 + (tex
	0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x75, 0x5f, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, // ture (u_TextureS
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // ampler, (v_texco
	0x6f, 0x72, 0x64, 0x30, 0x20, 0x2d, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x28, 0x74, 0x6d, 0x70, // ord0 - .    (tmp
	0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x2f, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, // var_2 / u_viewRe
	0x63, 0x74, 0x2e, 0x7a, 0x77, 0x29, 0x0a, 0x20, 0x20, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, // ct.zw).  )) * 0.
	0x33, 0x31, 0x36, 0x32, 0x31, 0x36, 0x32, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x63, 0x6f, 0x6c, // 3162162));.  col
	0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, // or_1 = (color_1 
	0x2b, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x28, 0x75, 0x5f, 0x54, 0x65, // + (texture (u_Te
	0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x28, 0x76, // xtureSampler, (v
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x2b, 0x20, 0x0a, 0x20, 0x20, // _texcoord0 + .  
	0x20, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x20, 0x2f, 0x20, 0x75, 0x5f, //   (tmpvar_3 / u_
	0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, 0x2e, 0x7a, 0x77, 0x29, 0x0a, 0x20, 0x20, 0x29, // viewRect.zw).  )
	0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x30, 0x37, 0x30, 0x32, 0x37, 0x30, 0x32, 0x37, 0x29, 0x29, // ) * 0.07027027))
	0x3b, 0x0a, 0x20, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x63, // ;.  color_1 = (c
	0x6f, 0x6c, 0x6f, 0x72, 0x5f, 0x31, 0x20, 0x2b, 0x20, 0x28, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, // olor_1 + (textur
	0x65, 0x20, 0x28, 0x75, 0x5f, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, // e (u_TextureSamp
	0x6c, 0x65, 0x72, 0x2c, 0x20, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // ler, (v_texcoord
	0x30, 0x20, 0x2d, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // 0 - .    (tmpvar
	0x5f, 0x33, 0x20, 0x2f, 0x20, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, 0x2e, // _3 / u_viewRect.
	0x7a, 0x77, 0x29, 0x0a, 0x20, 0x20, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e, 0x30, 0x37, 0x30, // zw).  )) * 0.070
	0x32, 0x37, 0x30, 0x32, 0x37, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, // 27027));.  gl_Fr
	0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x5f, // agColor = color_
	0x31, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                                       // 1;.}...
};

static const uint8_t GaussianBlur_fragment_d3d11[957] =
{
	0x46, 0x53, 0x48, 0x06, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0a, 0x75, // FSH.o.><.......u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, 0x12, 0x00, 0x00, 0x00, 0x01, 0x00, 0x17, // _viewRect.......
	0x75, 0x5f, 0x47, 0x75, 0x61, 0x73, 0x73, 0x69, 0x61, 0x6e, 0x42, 0x6c, 0x75, 0x72, 0x44, 0x69, // u_GuassianBlurDi
	0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x12, 0x00, 0x10, 0x00, 0x01, 0x00, 0x09, 0x75, 0x5f, // rection.......u_
	0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0x68, 0x03, 0x00, // Texture0.....h..
	0x00, 0x44, 0x58, 0x42, 0x43, 0x02, 0xca, 0xb5, 0xad, 0x18, 0x5f, 0x21, 0xad, 0x42, 0xa0, 0xa7, // .DXBC....._!.B..
	0xfa, 0x07, 0xfc, 0xe7, 0x0b, 0x01, 0x00, 0x00, 0x00, 0x68, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, // .........h......
	0x00, 0x2c, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, // .,...........ISG
	0x4e, 0x50, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, // NP...........8..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x0f, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....D..........
	0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x53, 0x56, 0x5f, // .............SV_
	0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, // POSITION.TEXCOOR
	0x44, 0x00, 0xab, 0xab, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // D....OSGN,......
	0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ..... ..........
	0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, // .............SV_
	0x54, 0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x45, 0x58, 0xa8, 0x02, 0x00, // TARGET...SHEX...
	0x00, 0x50, 0x00, 0x00, 0x00, 0xaa, 0x00, 0x00, 0x00, 0x6a, 0x08, 0x00, 0x01, 0x59, 0x00, 0x00, // .P.......j...Y..
	0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, // .F. .........Z..
	0x03, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, // ..`......X....p.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x32, 0x10, 0x10, // .....UU..b...2..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, // .....e.... .....
	0x00, 0x68, 0x00, 0x00, 0x02, 0x04, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x8b, 0xc2, 0x00, 0x00, // .h.......E......
	0x80, 0x43, 0x55, 0x15, 0x00, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, // .CU..........F..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, // .....F~.......`.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x0b, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, // .....8..........
	0x00, 0x46, 0x84, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, // .F. ..........@.
	0x00, 0x14, 0x3b, 0xb1, 0x3f, 0x14, 0x3b, 0xb1, 0x3f, 0xec, 0xc4, 0x4e, 0x40, 0xec, 0xc4, 0x4e, // ..;.?.;.?..N@..N
	0x40, 0x0e, 0x00, 0x00, 0x08, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, // @............F..
	0x00, 0x01, 0x00, 0x00, 0x00, 0xe6, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ....... ........
	0x00, 0x00, 0x00, 0x00, 0x07, 0xf2, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, // .............F..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x14, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....F..........
	0x08, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x80, 0x41, 0x00, 0x00, // .........F...A..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x14, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, // .....F.......E..
	0x8b, 0xc2, 0x00, 0x00, 0x80, 0x43, 0x55, 0x15, 0x00, 0xf2, 0x00, 0x10, 0x00, 0x03, 0x00, 0x00, // .....CU.........
	0x00, 0x46, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, // .F.......F~.....
	0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x8b, 0xc2, 0x00, 0x00, // ..`......E......
	0x80, 0x43, 0x55, 0x15, 0x00, 0xf2, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0xe6, 0x0a, 0x10, // .CU.............
	0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, // .....F~.......`.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x03, 0x00, 0x00, // .....8..........
	0x00, 0x46, 0x0e, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x18, 0xe7, 0xa1, // .F........@.....
	0x3e, 0x18, 0xe7, 0xa1, 0x3e, 0x18, 0xe7, 0xa1, 0x3e, 0x18, 0xe7, 0xa1, 0x3e, 0x32, 0x00, 0x00, // >...>...>...>2..
	0x0c, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, // .........F......
	0x00, 0x02, 0x40, 0x00, 0x00, 0xc6, 0x79, 0x68, 0x3e, 0xc6, 0x79, 0x68, 0x3e, 0xc6, 0x79, 0x68, // ..@...yh>.yh>.yh
	0x3e, 0xc6, 0x79, 0x68, 0x3e, 0x46, 0x0e, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, // >.yh>F.......E..
	0x8b, 0xc2, 0x00, 0x00, 0x80, 0x43, 0x55, 0x15, 0x00, 0xf2, 0x00, 0x10, 0x00, 0x03, 0x00, 0x00, // .....CU.........
	0x00, 0x46, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, // .F.......F~.....
	0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x8b, 0xc2, 0x00, 0x00, // ..`......E......
	0x80, 0x43, 0x55, 0x15, 0x00, 0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0xe6, 0x0a, 0x10, // .CU.............
	0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, // .....F~.......`.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0c, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // .....2..........
	0x00, 0x46, 0x0e, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x18, 0xe7, 0xa1, // .F........@.....
	0x3e, 0x18, 0xe7, 0xa1, 0x3e, 0x18, 0xe7, 0xa1, 0x3e, 0x18, 0xe7, 0xa1, 0x3e, 0x46, 0x0e, 0x10, // >...>...>...>F..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0c, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // .....2..........
	0x00, 0x46, 0x0e, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0xdc, 0xe9, 0x8f, // .F........@.....
	0x3d, 0xdc, 0xe9, 0x8f, 0x3d, 0xdc, 0xe9, 0x8f, 0x3d, 0xdc, 0xe9, 0x8f, 0x3d, 0x46, 0x0e, 0x10, // =...=...=...=F..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0c, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, // .....2.... .....
	0x00, 0x46, 0x0e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0xdc, 0xe9, 0x8f, // .F........@.....
	0x3d, 0xdc, 0xe9, 0x8f, 0x3d, 0xdc, 0xe9, 0x8f, 0x3d, 0xdc, 0xe9, 0x8f, 0x3d, 0x46, 0x0e, 0x10, // =...=...=...=F..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x20, 0x00,                   // .....>..... .
};

static const uint8_t GaussianBlur_fragment_vk[2140] =
{
	0x46, 0x53, 0x48, 0x06, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x17, 0x75, // FSH.o.><.......u
	0x5f, 0x47, 0x75, 0x61, 0x73, 0x73, 0x69, 0x61, 0x6e, 0x42, 0x6c, 0x75, 0x72, 0x44, 0x69, 0x72, // _GuassianBlurDir
	0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x12, 0x01, 0x10, 0x00, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x76, // ection.......u_v
	0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, 0x12, 0x01, 0x00, 0x00, 0x01, 0x00, 0x10, 0x75, 0x5f, // iewRect.......u_
	0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x10, 0x00, // TextureSampler..
	0x40, 0x00, 0x50, 0x00, 0x00, 0x08, 0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, // @.P.......#.....
	0x07, 0x00, 0x08, 0x00, 0x6c, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, // ....l...........
	0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, // ............GLSL
	0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, // .std.450........
	0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x07, 0x00, 0x04, 0x00, 0x00, 0x00, // ................
	0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0xa7, 0x00, 0x00, 0x00, // ....main........
	0xb0, 0x00, 0x00, 0x00, 0x10, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, // ................
	0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, // ................
	0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x08, 0x00, // ....main........
	0x25, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, // %...u_TextureSam
	0x70, 0x6c, 0x65, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x00, 0x05, 0x00, 0x08, 0x00, // plerSampler.....
	0x28, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, // (...u_TextureSam
	0x70, 0x6c, 0x65, 0x72, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x05, 0x00, 0x04, 0x00, // plerTexture.....
	0x51, 0x00, 0x00, 0x00, 0x24, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, // Q...$Global.....
	0x51, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, // Q.......u_viewRe
	0x63, 0x74, 0x00, 0x00, 0x06, 0x00, 0x09, 0x00, 0x51, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ct......Q.......
	0x75, 0x5f, 0x47, 0x75, 0x61, 0x73, 0x73, 0x69, 0x61, 0x6e, 0x42, 0x6c, 0x75, 0x72, 0x44, 0x69, // u_GuassianBlurDi
	0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x05, 0x00, 0x03, 0x00, 0x53, 0x00, 0x00, 0x00, // rection.....S...
	0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0xa7, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x74, 0x65, // ............v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00, 0x06, 0x00, 0xb0, 0x00, 0x00, 0x00, // xcoord0.........
	0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x00, 0x00, // bgfx_FragData0..
	0x47, 0x00, 0x04, 0x00, 0x25, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // G...%...".......
	0x47, 0x00, 0x04, 0x00, 0x25, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, // G...%...!...P...
	0x47, 0x00, 0x04, 0x00, 0x28, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // G...(...".......
	0x47, 0x00, 0x04, 0x00, 0x28, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, // G...(...!...@...
	0x48, 0x00, 0x05, 0x00, 0x51, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, // H...Q.......#...
	0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x51, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ....H...Q.......
	0x23, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x51, 0x00, 0x00, 0x00, // #.......G...Q...
	0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x53, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, // ....G...S..."...
	0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x53, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, // ....G...S...!...
	0x30, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xa7, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, // 0...G...........
	0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xb0, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, // ....G...........
	0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, // ............!...
	0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x02, 0x00, 0x06, 0x00, 0x00, 0x00, // ................
	0x16, 0x00, 0x03, 0x00, 0x07, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x19, 0x00, 0x09, 0x00, // ........ .......
	0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x17, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // ................
	0x17, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // ................
	0x20, 0x00, 0x04, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, //  ...$...........
	0x3b, 0x00, 0x04, 0x00, 0x24, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ;...$...%.......
	0x20, 0x00, 0x04, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, //  ...'...........
	0x3b, 0x00, 0x04, 0x00, 0x27, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ;...'...(.......
	0x15, 0x00, 0x04, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ....+... .......
	0x2b, 0x00, 0x04, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // +...+...,.......
	0x2b, 0x00, 0x04, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // +...+...0.......
	0x1b, 0x00, 0x03, 0x00, 0x34, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, // ....4.......+...
	0x07, 0x00, 0x00, 0x00, 0x4e, 0x00, 0x00, 0x00, 0x14, 0x3b, 0xb1, 0x3f, 0x1e, 0x00, 0x04, 0x00, // ....N....;.?....
	0x51, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, // Q........... ...
	0x52, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, // R.......Q...;...
	0x52, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, // R...S....... ...
	0x54, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, // T...........+...
	0x07, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00, 0xec, 0xc4, 0x4e, 0x40, 0x2b, 0x00, 0x04, 0x00, // ....Z.....N@+...
	0x07, 0x00, 0x00, 0x00, 0x66, 0x00, 0x00, 0x00, 0xc6, 0x79, 0x68, 0x3e, 0x2b, 0x00, 0x04, 0x00, // ....f....yh>+...
	0x07, 0x00, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00, 0x18, 0xe7, 0xa1, 0x3e, 0x2b, 0x00, 0x04, 0x00, // ....u......>+...
	0x07, 0x00, 0x00, 0x00, 0x92, 0x00, 0x00, 0x00, 0xdc, 0xe9, 0x8f, 0x3d, 0x20, 0x00, 0x04, 0x00, // ...........= ...
	0xa6, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, // ............;...
	0xa6, 0x00, 0x00, 0x00, 0xa7, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, // ............ ...
	0xaf, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, // ............;...
	0xaf, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x05, 0x00, // ............,...
	0x0b, 0x00, 0x00, 0x00, 0x6a, 0x01, 0x00, 0x00, 0x4e, 0x00, 0x00, 0x00, 0x4e, 0x00, 0x00, 0x00, // ....j...N...N...
	0x2c, 0x00, 0x05, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x6b, 0x01, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x00, // ,.......k...Z...
	0x5a, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // Z...6...........
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, // ................
	0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, // =.......&...%...
	0x3d, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, // =.......)...(...
	0x3d, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, 0xa7, 0x00, 0x00, 0x00, // =...............
	0x41, 0x00, 0x05, 0x00, 0x54, 0x00, 0x00, 0x00, 0xd9, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, // A...T.......S...
	0x2c, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xda, 0x00, 0x00, 0x00, // ,...=...........
	0xd9, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x07, 0x00, 0x0b, 0x00, 0x00, 0x00, 0xdb, 0x00, 0x00, 0x00, // ....O...........
	0xda, 0x00, 0x00, 0x00, 0xda, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ................
	0x85, 0x00, 0x05, 0x00, 0x0b, 0x00, 0x00, 0x00, 0xdc, 0x00, 0x00, 0x00, 0x6a, 0x01, 0x00, 0x00, // ............j...
	0xdb, 0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x54, 0x00, 0x00, 0x00, 0xde, 0x00, 0x00, 0x00, // ....A...T.......
	0x53, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, // S...,...=.......
	0xdf, 0x00, 0x00, 0x00, 0xde, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x07, 0x00, 0x0b, 0x00, 0x00, 0x00, // ........O.......
	0xe0, 0x00, 0x00, 0x00, 0xdf, 0x00, 0x00, 0x00, 0xdf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x01, 0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x0b, 0x00, 0x00, 0x00, 0xe1, 0x00, 0x00, 0x00, // ................
	0x6b, 0x01, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x56, 0x00, 0x05, 0x00, 0x34, 0x00, 0x00, 0x00, // k.......V...4...
	0x32, 0x01, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x57, 0x00, 0x05, 0x00, // 2...)...&...W...
	0x0d, 0x00, 0x00, 0x00, 0x34, 0x01, 0x00, 0x00, 0x32, 0x01, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, // ....4...2.......
	0x8e, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xe5, 0x00, 0x00, 0x00, 0x34, 0x01, 0x00, 0x00, // ............4...
	0x66, 0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x54, 0x00, 0x00, 0x00, 0xea, 0x00, 0x00, 0x00, // f...A...T.......
	0x53, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, // S...0...=.......
	0xeb, 0x00, 0x00, 0x00, 0xea, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x07, 0x00, 0x0b, 0x00, 0x00, 0x00, // ........O.......
	0xec, 0x00, 0x00, 0x00, 0xeb, 0x00, 0x00, 0x00, 0xeb, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // ................
	0x03, 0x00, 0x00, 0x00, 0x88, 0x00, 0x05, 0x00, 0x0b, 0x00, 0x00, 0x00, 0xed, 0x00, 0x00, 0x00, // ................
	0xdc, 0x00, 0x00, 0x00, 0xec, 0x00, 0x00, 0x00, 0x81, 0x00, 0x05, 0x00, 0x0b, 0x00, 0x00, 0x00, // ................
	0xee, 0x00, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, 0xed, 0x00, 0x00, 0x00, 0x56, 0x00, 0x05, 0x00, // ............V...
	0x34, 0x00, 0x00, 0x00, 0x3a, 0x01, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, // 4...:...)...&...
	0x57, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x3c, 0x01, 0x00, 0x00, 0x3a, 0x01, 0x00, 0x00, // W.......<...:...
	0xee, 0x00, 0x00, 0x00, 0x8e, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xf1, 0x00, 0x00, 0x00, // ................
	0x3c, 0x01, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00, 0x81, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, // <...u...........
	0xf3, 0x00, 0x00, 0x00, 0xe5, 0x00, 0x00, 0x00, 0xf1, 0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, // ............A...
	0x54, 0x00, 0x00, 0x00, 0xf6, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, // T.......S...0...
	0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xf7, 0x00, 0x00, 0x00, 0xf6, 0x00, 0x00, 0x00, // =...............
	0x4f, 0x00, 0x07, 0x00, 0x0b, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0xf7, 0x00, 0x00, 0x00, // O...............
	0xf7, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x88, 0x00, 0x05, 0x00, // ................
	0x0b, 0x00, 0x00, 0x00, 0xf9, 0x00, 0x00, 0x00, 0xdc, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, // ................
	0x83, 0x00, 0x05, 0x00, 0x0b, 0x00, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, // ................
	0xf9, 0x00, 0x00, 0x00, 0x56, 0x00, 0x05, 0x00, 0x34, 0x00, 0x00, 0x00, 0x42, 0x01, 0x00, 0x00, // ....V...4...B...
	0x29, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x57, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, // )...&...W.......
	0x44, 0x01, 0x00, 0x00, 0x42, 0x01, 0x00, 0x00, 0xfa, 0x00, 0x00, 0x00, 0x8e, 0x00, 0x05, 0x00, // D...B...........
	0x0d, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x00, 0x00, 0x44, 0x01, 0x00, 0x00, 0x75, 0x00, 0x00, 0x00, // ........D...u...
	0x81, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xf3, 0x00, 0x00, 0x00, // ................
	0xfd, 0x00, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x54, 0x00, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, // ....A...T.......
	0x53, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, // S...0...=.......
	0x03, 0x01, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x4f, 0x00, 0x07, 0x00, 0x0b, 0x00, 0x00, 0x00, // ........O.......
	0x04, 0x01, 0x00, 0x00, 0x03, 0x01, 0x00, 0x00, 0x03, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // ................
	0x03, 0x00, 0x00, 0x00, 0x88, 0x00, 0x05, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x05, 0x01, 0x00, 0x00, // ................
	0xe1, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x81, 0x00, 0x05, 0x00, 0x0b, 0x00, 0x00, 0x00, // ................
	0x06, 0x01, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, 0x05, 0x01, 0x00, 0x00, 0x56, 0x00, 0x05, 0x00, // ............V...
	0x34, 0x00, 0x00, 0x00, 0x4a, 0x01, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, // 4...J...)...&...
	0x57, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x4c, 0x01, 0x00, 0x00, 0x4a, 0x01, 0x00, 0x00, // W.......L...J...
	0x06, 0x01, 0x00, 0x00, 0x8e, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x09, 0x01, 0x00, 0x00, // ................
	0x4c, 0x01, 0x00, 0x00, 0x92, 0x00, 0x00, 0x00, 0x81, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, // L...............
	0x0b, 0x01, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x09, 0x01, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, // ............A...
	0x54, 0x00, 0x00, 0x00, 0x0e, 0x01, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, // T.......S...0...
	0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0f, 0x01, 0x00, 0x00, 0x0e, 0x01, 0x00, 0x00, // =...............
	0x4f, 0x00, 0x07, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x0f, 0x01, 0x00, 0x00, // O...............
	0x0f, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x88, 0x00, 0x05, 0x00, // ................
	0x0b, 0x00, 0x00, 0x00, 0x11, 0x01, 0x00, 0x00, 0xe1, 0x00, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, // ................
	0x83, 0x00, 0x05, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x12, 0x01, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, // ................
	0x11, 0x01, 0x00, 0x00, 0x56, 0x00, 0x05, 0x00, 0x34, 0x00, 0x00, 0x00, 0x52, 0x01, 0x00, 0x00, // ....V...4...R...
	0x29, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x57, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, // )...&...W.......
	0x54, 0x01, 0x00, 0x00, 0x52, 0x01, 0x00, 0x00, 0x12, 0x01, 0x00, 0x00, 0x8e, 0x00, 0x05, 0x00, // T...R...........
	0x0d, 0x00, 0x00, 0x00, 0x15, 0x01, 0x00, 0x00, 0x54, 0x01, 0x00, 0x00, 0x92, 0x00, 0x00, 0x00, // ........T.......
	0x81, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x17, 0x01, 0x00, 0x00, 0x0b, 0x01, 0x00, 0x00, // ................
	0x15, 0x01, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xb0, 0x00, 0x00, 0x00, 0x17, 0x01, 0x00, 0x00, // ....>...........
	0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00,                         // ....8..... .
};
