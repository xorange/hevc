
#include "common/common.h"

const uint8_t x265_cabac_context_init_I[X265_CABAC_STATE_NUMBER] =
{
	/*sao merge*/
	153,
	/*sao type*/
	200,
	/* split */
	139, 141, 157,
	/* transquant */
	154,
	/* skip */
	CNU, CNU, CNU,
	/* pred */
	CNU,
	/* part */
	184, CNU, CNU, CNU,
	/* intra luma */
	184,
	/* intra chroma */
	63, 139,
	/* rqt */
	CNU,
	/* merge */
	154,
	/* merge idx */
	CNU,
	/* inter */
	CNU, CNU, CNU, CNU, CNU,
	/* ref */
	CNU, CNU,
	/* mvp */
	CNU, CNU,
	/* transform */
	153, 138, 138,
	/* cbf */
	111, 141, CNU, CNU, CNU, 94, 138, 182, CNU, CNU,
	/* mvd */
	CNU, CNU,
	/* qp delta */
	154, 154,
	/* transform skip */
	139, 139,
	/* last */
	110, 110, 124, 125, 140, 153, 125, 127, 140, 109, 111, 143, 127, 111, 79, 108, 123, 63, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU,
	110, 110, 124, 125, 140, 153, 125, 127, 140, 109, 111, 143, 127, 111, 79, 108, 123, 63, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU,
	/* sub block */
	91, 171, 134, 141,
	/* sig coeff */
	111, 111, 125, 110, 110, 94, 124, 108, 124, 107, 125, 141, 179, 153, 125, 107, 125, 141, 179, 153, 125, 107, 125, 141, 179, 153, 125, 140, 139, 182, 182, 152, 136, 152, 136, 153, 136, 139, 111, 136, 139, 111,
	/* coeff abs 1 */
	140, 92, 137, 138, 140, 152, 138, 139, 153, 74, 149, 92, 139, 107, 122, 152, 140, 179, 166, 182, 140, 227, 122, 197,
	/* coeff abs 2 */
	138, 153, 136, 167, 152, 152,
};


const uint8_t x265_cabac_context_init_PB1[X265_CABAC_STATE_NUMBER] =
{
	153,
	185,
	107, 139, 126,
	154,
	197, 185, 201,
	149,
	154, 139, CNU, CNU,
	154,
	152, 139,
	79,
	110,
	122,
	95, 79, 63, 31, 31,
	153, 153,
	168, CNU,
	124, 138, 94,
	153, 111, CNU, CNU, CNU, 149, 107, 167, CNU, CNU,
	140, 198,
	154, 154,
	139, 139,
	125, 110, 94, 110, 95, 79, 125, 111, 110, 78, 110, 111, 111, 95, 94, 108, 123, 108, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU,
	125, 110, 94, 110, 95, 79, 125, 111, 110, 78, 110, 111, 111, 95, 94, 108, 123, 108, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU,
	121, 140, 61, 154,
	155, 154, 139, 153, 139, 123, 123, 63, 153, 166, 183, 140, 136, 153, 154, 166, 183, 140, 136, 153, 154, 166, 183, 140, 136, 153, 154, 170, 153, 123, 123, 107, 121, 107, 121, 167, 151, 183, 140, 151, 183, 140,
	154, 196, 196, 167, 154, 152, 167, 182, 182, 134, 149, 136, 153, 121, 136, 137, 169, 194, 166, 167, 154, 167, 137, 182,
	107, 167, 91, 122, 107, 167,
};

const uint8_t x265_cabac_context_init_PB2[X265_CABAC_STATE_NUMBER] =
{
	153,
	160,
	107, 139, 126,
	154,
	197, 185, 201,
	134,
	154, 139, CNU, CNU,
	183,
	152, 139,
	79,
	154,
	137,
	95, 79, 63, 31, 31,
	153, 153,
	168, CNU,
	224, 167, 122,
	153, 111, CNU, CNU, CNU, 149, 92, 167, CNU, CNU,
	169, 198,
	154, 154,
	139, 139,
	125, 110, 124, 110, 95, 94, 125, 111, 111, 79, 125, 126, 111, 111, 79, 108, 123, 93, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU,
	125, 110, 124, 110, 95, 94, 125, 111, 111, 79, 125, 126, 111, 111, 79, 108, 123, 93, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU, CNU,
	121, 140, 61, 154,
	170, 154, 139, 153, 139, 123, 123, 63, 124, 166, 183, 140, 136, 153, 154, 166, 183, 140, 136, 153, 154, 166, 183, 140, 136, 153, 154, 170, 153, 138, 138, 122, 121, 122, 121, 167, 151, 183, 140, 151,  183,  140,
	154, 196, 167, 167, 154, 152, 167, 182, 182, 134, 149, 136, 153, 121, 136, 122, 169, 208, 166, 167, 154, 152, 167, 182,
	107, 167, 91, 107, 107, 167,
};


const int32_t x265_entropy_bits[128] =
{
#if X265_FAST_BIT_EST
	// Corrected table, most notably for last state
	0x07b23, 0x085f9, 0x074a0, 0x08cbc, 0x06ee4, 0x09354, 0x067f4, 0x09c1b, 0x060b0, 0x0a62a, 0x05a9c, 0x0af5b, 0x0548d, 0x0b955, 0x04f56, 0x0c2a9,
	0x04a87, 0x0cbf7, 0x045d6, 0x0d5c3, 0x04144, 0x0e01b, 0x03d88, 0x0e937, 0x039e0, 0x0f2cd, 0x03663, 0x0fc9e, 0x03347, 0x10600, 0x03050, 0x10f95,
	0x02d4d, 0x11a02, 0x02ad3, 0x12333, 0x0286e, 0x12cad, 0x02604, 0x136df, 0x02425, 0x13f48, 0x021f4, 0x149c4, 0x0203e, 0x1527b, 0x01e4d, 0x15d00,
	0x01c99, 0x166de, 0x01b18, 0x17017, 0x019a5, 0x17988, 0x01841, 0x18327, 0x016df, 0x18d50, 0x015d9, 0x19547, 0x0147c, 0x1a083, 0x0138e, 0x1a8a3,
	0x01251, 0x1b418, 0x01166, 0x1bd27, 0x01068, 0x1c77b, 0x00f7f, 0x1d18e, 0x00eda, 0x1d91a, 0x00e19, 0x1e254, 0x00d4f, 0x1ec9a, 0x00c90, 0x1f6e0,
	0x00c01, 0x1fef8, 0x00b5f, 0x208b1, 0x00ab6, 0x21362, 0x00a15, 0x21e46, 0x00988, 0x2285d, 0x00934, 0x22ea8, 0x008a8, 0x239b2, 0x0081d, 0x24577,
	0x007c9, 0x24ce6, 0x00763, 0x25663, 0x00710, 0x25e8f, 0x006a0, 0x26a26, 0x00672, 0x26f23, 0x005e8, 0x27ef8, 0x005ba, 0x284b5, 0x0055e, 0x29057,
	0x0050c, 0x29bab, 0x004c1, 0x2a674, 0x004a7, 0x2aa5e, 0x0046f, 0x2b32f, 0x0041f, 0x2c0ad, 0x003e7, 0x2ca8d, 0x003ba, 0x2d323, 0x0010c, 0x3bfbb
#else
	0x08000, 0x08000, 0x076da, 0x089a0, 0x06e92, 0x09340, 0x0670a, 0x09cdf, 0x06029, 0x0a67f, 0x059dd, 0x0b01f, 0x05413, 0x0b9bf, 0x04ebf, 0x0c35f,
	0x049d3, 0x0ccff, 0x04546, 0x0d69e, 0x0410d, 0x0e03e, 0x03d22, 0x0e9de, 0x0397d, 0x0f37e, 0x03619, 0x0fd1e, 0x032ee, 0x106be, 0x02ffa, 0x1105d,
	0x02d37, 0x119fd, 0x02aa2, 0x1239d, 0x02836, 0x12d3d, 0x025f2, 0x136dd, 0x023d1, 0x1407c, 0x021d2, 0x14a1c, 0x01ff2, 0x153bc, 0x01e2f, 0x15d5c,
	0x01c87, 0x166fc, 0x01af7, 0x1709b, 0x0197f, 0x17a3b, 0x0181d, 0x183db, 0x016d0, 0x18d7b, 0x01595, 0x1971b, 0x0146c, 0x1a0bb, 0x01354, 0x1aa5a,
	0x0124c, 0x1b3fa, 0x01153, 0x1bd9a, 0x01067, 0x1c73a, 0x00f89, 0x1d0da, 0x00eb7, 0x1da79, 0x00df0, 0x1e419, 0x00d34, 0x1edb9, 0x00c82, 0x1f759,
	0x00bda, 0x200f9, 0x00b3c, 0x20a99, 0x00aa5, 0x21438, 0x00a17, 0x21dd8, 0x00990, 0x22778, 0x00911, 0x23118, 0x00898, 0x23ab8, 0x00826, 0x24458,
	0x007ba, 0x24df7, 0x00753, 0x25797, 0x006f2, 0x26137, 0x00696, 0x26ad7, 0x0063f, 0x27477, 0x005ed, 0x27e17, 0x0059f, 0x287b6, 0x00554, 0x29156,
	0x0050e, 0x29af6, 0x004cc, 0x2a497, 0x0048d, 0x2ae35, 0x00451, 0x2b7d6, 0x00418, 0x2c176, 0x003e2, 0x2cb15, 0x003af, 0x2d4b5, 0x0037f, 0x2de55
#endif
};



const uint8_t x265_cabac_transition_mps [ 128 ] =
{
	2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
	18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33,
	34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49,
	50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65,
	66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81,
	82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97,
	98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113,
	114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 124, 125, 126, 127
};

const uint8_t x265_cabac_transition_lps [128] =
{
	1, 0, 0, 1, 2, 3, 4, 5, 4, 5, 8, 9, 8, 9, 10, 11,
	12, 13, 14, 15, 16, 17, 18, 19, 18, 19, 22, 23, 22, 23, 24, 25,
	26, 27, 26, 27, 30, 31, 30, 31, 32, 33, 32, 33, 36, 37, 36, 37,
	38, 39, 38, 39, 42, 43, 42, 43, 44, 45, 44, 45, 46, 47, 48, 49,
	48, 49, 50, 51, 52, 53, 52, 53, 54, 55, 54, 55, 56, 57, 58, 59,
	58, 59, 60, 61, 60, 61, 60, 61, 62, 63, 64, 65, 64, 65, 66, 67,
	66, 67, 66, 67, 68, 69, 68, 69, 70, 71, 70, 71, 70, 71, 72, 73,
	72, 73, 72, 73, 74, 75, 74, 75, 74, 75, 76, 77, 76, 77, 126, 127
};

uint8_t x265_cabac_transition[128][2] ;

void x265_enc_bin_if_build_cabac_transition_table ()
{
	int32_t i = 0, j = 0 ;

	for ( i = 0 ; i < 128 ; ++ i )
	{
		for ( j = 0 ; j < 2 ; ++ j )
		{
			x265_cabac_transition[i][j] = ((i&1) == j)
											? x265_cabac_transition_mps[i]
			                                : x265_cabac_transition_lps[i] ;
		}
	}
}

void x265_enc_bin_if_init ( x265_enc_bin_if_t * enc_bin_if )
{
	memset ( enc_bin_if, 0, sizeof (x265_enc_bin_if_t) ) ;
	enc_bin_if->enc_bin_if_delete = x265_enc_bin_if_delete ;
}


void x265_enc_bin_if_delete ( x265_enc_bin_if_t * enc_bin_if )
{

}

uint8_t x265_enc_bin_if_get_state ( uint8_t i_slice_qp, uint8_t i_init_value )
{
	int8_t i_state = 0 ;
	int32_t i_qp = 0 ;
	int32_t i_slope = 0 ;
	int32_t i_offset = 0 ;
	int32_t i_init_state = 0 ;
	int32_t b_mp_state = 0 ;

	i_qp = x265_clip3_int32 ( i_slice_qp, 0, 51 ) ;
	i_slope = ( i_init_value >> 4 ) * 5 - 45 ;
	i_offset = ( ( i_init_value & 15 ) << 3 ) - 16 ;
	i_init_state = X265_MIN ( X265_MAX ( 1, ( ( ( i_slope * i_qp ) >> 4 ) + i_offset ) ), 126 );
	b_mp_state = ( i_init_state >= 64 ) ;
	i_state = ((b_mp_state
				? (i_init_state - 64)
				: (63 - i_init_state)) <<1) + b_mp_state ;

	return i_state ;
}

void x265_enc_bin_if_print_offset ()
{
	FILE *file = stderr ;

	// 19
	fprintf ( file, "%d\n", (uint32_t)&((x265_enc_bin_if_t*)0)->init ) ;
	fprintf ( file, "%d\n", (uint32_t)&((x265_enc_bin_if_t*)0)->uninit ) ;
	fprintf ( file, "%d\n", (uint32_t)&((x265_enc_bin_if_t*)0)->start ) ;
	fprintf ( file, "%d\n", (uint32_t)&((x265_enc_bin_if_t*)0)->finish ) ;
	fprintf ( file, "%d\n", (uint32_t)&((x265_enc_bin_if_t*)0)->copy_state ) ;
	fprintf ( file, "%d\n", (uint32_t)&((x265_enc_bin_if_t*)0)->flush ) ;
	fprintf ( file, "%d\n", (uint32_t)&((x265_enc_bin_if_t*)0)->reset_bac ) ;
	fprintf ( file, "%d\n", (uint32_t)&((x265_enc_bin_if_t*)0)->encode_pcm_align_bits ) ;
	fprintf ( file, "%d\n", (uint32_t)&((x265_enc_bin_if_t*)0)->x_write_pcm_code ) ;
	fprintf ( file, "%d\n", (uint32_t)&((x265_enc_bin_if_t*)0)->reset_bits ) ;
	fprintf ( file, "%d\n", (uint32_t)&((x265_enc_bin_if_t*)0)->get_num_written_bits ) ;
	fprintf ( file, "%d\n", (uint32_t)&((x265_enc_bin_if_t*)0)->encode_bin ) ;
	fprintf ( file, "%d\n", (uint32_t)&((x265_enc_bin_if_t*)0)->encode_bin_ep ) ;
	fprintf ( file, "%d\n", (uint32_t)&((x265_enc_bin_if_t*)0)->encode_bins_ep ) ;
	fprintf ( file, "%d\n", (uint32_t)&((x265_enc_bin_if_t*)0)->encode_bin_trm ) ;
	fprintf ( file, "%d\n", (uint32_t)&((x265_enc_bin_if_t*)0)->get_enc_bin_cabac ) ;
	fprintf ( file, "%d\n", (uint32_t)&((x265_enc_bin_if_t*)0)->enc_bin_if_delete ) ;
	fprintf ( file, "%d\n", (uint32_t)&((x265_enc_bin_if_t*)0)->reset_entropy ) ;
	fprintf ( file, "%d\n", (uint32_t)&((x265_enc_bin_if_t*)0)->determine_cabac_init_idx ) ;

	fprintf ( file, "%d\n", sizeof(x265_enc_bin_if_t) ) ;
}

