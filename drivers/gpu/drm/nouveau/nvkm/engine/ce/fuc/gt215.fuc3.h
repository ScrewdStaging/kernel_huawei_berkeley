uint32_t gt215_ce_data[] = {
/* 0x0000: ctx_object */
	0x00000000,
/* 0x0004: ctx_dma */
/* 0x0004: ctx_dma_query */
	0x00000000,
/* 0x0008: ctx_dma_src */
	0x00000000,
/* 0x000c: ctx_dma_dst */
	0x00000000,
/* 0x0010: ctx_query_address_high */
	0x00000000,
/* 0x0014: ctx_query_address_low */
	0x00000000,
/* 0x0018: ctx_query_counter */
	0x00000000,
/* 0x001c: ctx_src_address_high */
	0x00000000,
/* 0x0020: ctx_src_address_low */
	0x00000000,
/* 0x0024: ctx_src_pitch */
	0x00000000,
/* 0x0028: ctx_src_tile_mode */
	0x00000000,
/* 0x002c: ctx_src_xsize */
	0x00000000,
/* 0x0030: ctx_src_ysize */
	0x00000000,
/* 0x0034: ctx_src_zsize */
	0x00000000,
/* 0x0038: ctx_src_zoff */
	0x00000000,
/* 0x003c: ctx_src_xoff */
	0x00000000,
/* 0x0040: ctx_src_yoff */
	0x00000000,
/* 0x0044: ctx_src_cpp */
	0x00000000,
/* 0x0048: ctx_dst_address_high */
	0x00000000,
/* 0x004c: ctx_dst_address_low */
	0x00000000,
/* 0x0050: ctx_dst_pitch */
	0x00000000,
/* 0x0054: ctx_dst_tile_mode */
	0x00000000,
/* 0x0058: ctx_dst_xsize */
	0x00000000,
/* 0x005c: ctx_dst_ysize */
	0x00000000,
/* 0x0060: ctx_dst_zsize */
	0x00000000,
/* 0x0064: ctx_dst_zoff */
	0x00000000,
/* 0x0068: ctx_dst_xoff */
	0x00000000,
/* 0x006c: ctx_dst_yoff */
	0x00000000,
/* 0x0070: ctx_dst_cpp */
	0x00000000,
/* 0x0074: ctx_format */
	0x00000000,
/* 0x0078: ctx_swz_const0 */
	0x00000000,
/* 0x007c: ctx_swz_const1 */
	0x00000000,
/* 0x0080: ctx_xcnt */
	0x00000000,
/* 0x0084: ctx_ycnt */
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
/* 0x0100: dispatch_table */
	0x00010000,
	0x00000000,
	0x00000000,
	0x00010040,
	0x00010160,
	0x00000000,
	0x00010050,
	0x00010162,
	0x00000000,
	0x00030060,
/* 0x0128: dispatch_dma */
	0x00010170,
	0x00000000,
	0x00010170,
	0x00000000,
	0x00010170,
	0x00000000,
	0x00070080,
	0x00000028,
	0xfffff000,
	0x0000002c,
	0xfff80000,
	0x00000030,
	0xffffe000,
	0x00000034,
	0xfffff800,
	0x00000038,
	0xfffff000,
	0x0000003c,
	0xfff80000,
	0x00000040,
	0xffffe000,
	0x00070088,
	0x00000054,
	0xfffff000,
	0x00000058,
	0xfff80000,
	0x0000005c,
	0xffffe000,
	0x00000060,
	0xfffff800,
	0x00000064,
	0xfffff000,
	0x00000068,
	0xfff80000,
	0x0000006c,
	0xffffe000,
	0x000200c0,
	0x00010492,
	0x00000000,
	0x0001051b,
	0x00000000,
	0x000e00c3,
	0x0000001c,
	0xffffff00,
	0x00000020,
	0x00000000,
	0x00000048,
	0xffffff00,
	0x0000004c,
	0x00000000,
	0x00000024,
	0xfff80000,
	0x00000050,
	0xfff80000,
	0x00000080,
	0xffff0000,
	0x00000084,
	0xffffe000,
	0x00000074,
	0xfccc0000,
	0x00000078,
	0x00000000,
	0x0000007c,
	0x00000000,
	0x00000010,
	0xffffff00,
	0x00000014,
	0x00000000,
	0x00000018,
	0x00000000,
	0x00000800,
};

uint32_t gt215_ce_code[] = {
/* 0x0000: main */
	0x04fe04bd,
	0x3517f000,
	0xf10010fe,
	0xf1040017,
	0xf0fff327,
	0x12d00023,
	0x0c25f0c0,
	0xf40012d0,
	0x17f11031,
	0x27f01200,
	0x0012d003,
/* 0x002f: spin */
	0xf40031f4,
	0x0ef40028,
/* 0x0035: ih */
	0x8001cffd,
	0xf40812c4,
	0x21f4060b,
/* 0x0041: ih_no_chsw */
	0x0412c472,
	0xf4060bf4,
/* 0x004a: ih_no_cmd */
	0x11c4c321,
	0x4001d00c,
/* 0x0052: swctx */
	0x47f101f8,
	0x4bfe7700,
	0x0007fe00,
	0xf00204b9,
	0x01f40643,
	0x0604fa09,
/* 0x006b: swctx_load */
	0xfa060ef4,
/* 0x006e: swctx_done */
	0x03f80504,
/* 0x0072: chsw */
	0x27f100f8,
	0x23cf1400,
	0x1e3fc800,
	0xf4170bf4,
	0x21f40132,
	0x1e3af052,
	0xf00023d0,
	0x24d00147,
/* 0x0093: chsw_no_unload */
	0xcf00f880,
	0x3dc84023,
	0x220bf41e,
	0xf40131f4,
	0x57f05221,
	0x0367f004,
/* 0x00a8: chsw_load_ctx_dma */
	0xa07856bc,
	0xb6018068,
	0x87d00884,
	0x0162b600,
/* 0x00bb: chsw_finish_load */
	0xf0f018f4,
	0x23d00237,
/* 0x00c3: dispatch */
	0xf100f880,
	0xcf190037,
	0x33cf4032,
	0xff24e400,
	0x1024b607,
	0x010057f1,
	0x74bd64bd,
/* 0x00dc: dispatch_loop */
	0x58005658,
	0x50b60157,
	0x0446b804,
	0xbb4d08f4,
	0x47b80076,
	0x0f08f404,
	0xb60276bb,
	0x57bb0374,
	0xdf0ef400,
/* 0x0100: dispatch_valid_mthd */
	0xb60246bb,
	0x45bb0344,
	0x01459800,
	0xb00453fd,
	0x1bf40054,
	0x00455820,
	0xb0014658,
	0x1bf40064,
	0x00538009,
/* 0x0127: dispatch_cmd */
	0xf4300ef4,
	0x55f90132,
	0xf40c01f4,
/* 0x0132: dispatch_invalid_bitfield */
	0x25f0250e,
/* 0x0135: dispatch_illegal_mthd */
	0x0125f002,
/* 0x0138: dispatch_error */
	0x100047f1,
	0xd00042d0,
	0x27f04043,
	0x0002d040,
/* 0x0148: hostirq_wait */
	0xf08002cf,
	0x24b04024,
	0xf71bf400,
/* 0x0154: dispatch_done */
	0x1d0027f1,
	0xd00137f0,
	0x00f80023,
/* 0x0160: cmd_nop */
/* 0x0162: cmd_pm_trigger */
	0x27f100f8,
	0x34bd2200,
	0xd00233f0,
	0x00f80023,
/* 0x0170: cmd_dma */
	0x012842b7,
	0xf00145b6,
	0x43801e39,
	0x0040b701,
	0x0644b606,
	0xf80043d0,
/* 0x0189: cmd_exec_set_format */
	0xf030f400,
	0xb00001b0,
	0x01b00101,
	0x0301b002,
	0xc71d0498,
	0x50b63045,
	0x3446c701,
	0xc70160b6,
	0x70b63847,
	0x0232f401,
	0x94bd84bd,
/* 0x01b4: ncomp_loop */
	0xb60f4ac4,
	0xb4bd0445,
/* 0x01bc: bpc_loop */
	0xf404a430,
	0xa5ff0f18,
	0x00cbbbc0,
	0xf40231f4,
/* 0x01ce: cmp_c0 */
	0x1bf4220e,
	0x10c7f00c,
	0xf400cbbb,
/* 0x01da: cmp_c1 */
	0xa430160e,
	0x0c18f406,
	0xbb14c7f0,
	0x0ef400cb,
/* 0x01e9: cmp_zero */
	0x80c7f107,
/* 0x01ed: bpc_next */
	0x01c83800,
	0xb60180b6,
	0xb5b801b0,
	0xc308f404,
	0xb80190b6,
	0x08f40497,
	0x0065fdb2,
	0x98110680,
	0x68fd2008,
	0x0502f400,
/* 0x0216: dst_xcnt */
	0x75fd64bd,
	0x1c078000,
	0xf10078fd,
	0xb6081057,
	0x56d00654,
	0x4057d000,
	0x080050b7,
	0xb61c0698,
	0x64b60162,
	0x11079808,
	0xfd0172b6,
	0x56d00567,
	0x0050b700,
	0x0060b401,
	0xb40056d0,
	0x56d00160,
	0x0260b440,
	0xb48056d0,
	0x56d00360,
	0x0050b7c0,
	0x1e069804,
	0x980056d0,
	0x56d01f06,
	0x1030f440,
/* 0x0276: cmd_exec_set_surface_tiled */
	0x579800f8,
	0x6879c70a,
	0xb66478c7,
	0x77c70280,
	0x0e76b060,
	0xf0091bf4,
	0x0ef40477,
/* 0x0291: xtile64 */
	0x027cf00f,
	0xfd1170b6,
	0x77f00947,
/* 0x029d: xtileok */
	0x0f5a9806,
	0xfd115b98,
	0xb7f000ab,
	0x04b7bb01,
	0xff01b2b6,
	0xa7bbc4ab,
	0x105d9805,
	0xbb01e7f0,
	0xe2b604e8,
	0xb4deff01,
	0xb605d8bb,
	0xef9401e0,
	0x02ebbb0c,
	0xf005fefd,
	0x60b7026c,
	0x64b60208,
	0x006fd008,
	0xbb04b7bb,
	0x5f9800cb,
	0x115b980b,
	0xf000fbfd,
	0xb7bb01b7,
	0x01b2b604,
	0xbb00fbbb,
	0xf0f905f7,
	0xf00c5f98,
	0xb8bb01b7,
	0x01b2b604,
	0xbb00fbbb,
	0xf0f905f8,
	0xb60078bb,
	0xb7f00282,
	0x04b8bb01,
	0x9804b9bb,
	0xe7f00e58,
	0x04e9bb01,
	0xff01e2b6,
	0xf7bbf48e,
	0x00cfbb04,
	0xbb0079bb,
	0xf0fc0589,
	0xd9fd90fc,
	0x00adbb00,
	0xfd0089fd,
	0xa8bb008f,
	0x04a7bb00,
	0xbb0192b6,
	0x69d00497,
	0x08579880,
	0xbb075898,
	0x7abb00ac,
	0x0081b600,
	0xfd1084b6,
	0x62b7058b,
	0x67d00600,
	0x0060b700,
	0x0068d004,
/* 0x0382: cmd_exec_set_surface_linear */
	0x6cf000f8,
	0x0260b702,
	0x0864b602,
	0xd0085798,
	0x60b70067,
	0x57980400,
	0x1074b607,
	0xb70067d0,
	0x98040060,
	0x67d00957,
/* 0x03ab: cmd_exec_wait */
	0xf900f800,
	0xf110f900,
	0xb6080007,
/* 0x03b6: loop */
	0x01cf0604,
	0x0114f000,
	0xfcfa1bf4,
	0xf800fc10,
/* 0x03c5: cmd_exec_query */
	0x0d34c800,
	0xf5701bf4,
	0xf103ab21,
	0xb6080c47,
	0x05980644,
	0x0450b605,
	0xd00045d0,
	0x57f04040,
	0x8045d00c,
	0x040040b7,
	0xb6040598,
	0x45d01054,
	0x0040b700,
	0x0057f105,
	0x0153f00b,
	0xf10045d0,
	0xb6404057,
	0x53f10154,
	0x45d08080,
	0x1057f140,
	0x1253f111,
	0x8045d013,
	0x151457f1,
	0x171653f1,
	0xf1c045d0,
	0xf0260157,
	0x47f10153,
	0x44b60800,
	0x0045d006,
/* 0x0438: query_counter */
	0x03ab21f5,
	0x080c47f1,
	0x980644b6,
	0x45d00505,
	0x4040d000,
	0xd00457f0,
	0x40b78045,
	0x05980400,
	0x1054b604,
	0xb70045d0,
	0xf1050040,
	0xd0030057,
	0x57f10045,
	0x53f11110,
	0x45d01312,
	0x06059840,
	0x050040b7,
	0xf10045d0,
	0xf0260157,
	0x47f10153,
	0x44b60800,
	0x0045d006,
/* 0x0492: cmd_exec */
	0x21f500f8,
	0x3fc803ab,
	0x0e0bf400,
	0x018921f5,
	0x020047f1,
/* 0x04a7: cmd_exec_no_format */
	0xf11e0ef4,
	0xb6081067,
	0x77f00664,
	0x11078001,
	0x981c0780,
	0x67d02007,
	0x4067d000,
/* 0x04c2: cmd_exec_init_src_surface */
	0x32f444bd,
	0xc854bd02,
	0x0bf4043f,
	0x8221f50a,
	0x0a0ef403,
/* 0x04d4: src_tiled */
	0x027621f5,
/* 0x04db: cmd_exec_init_dst_surface */
	0xf40749f0,
	0x57f00231,
	0x083fc82c,
	0xf50a0bf4,
	0xf4038221,
/* 0x04ee: dst_tiled */
	0x21f50a0e,
	0x49f00276,
/* 0x04f5: cmd_exec_kick */
	0x0057f108,
	0x0654b608,
	0xd0210698,
	0x67f04056,
	0x0063f141,
	0x0546fd44,
	0xc80054d0,
	0x0bf40c3f,
	0xc521f507,
/* 0x0519: cmd_exec_done */
/* 0x051b: cmd_wrcache_flush */
	0xf100f803,
	0xbd220027,
	0x0133f034,
	0xf80023d0,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
	0x00000000,
};
