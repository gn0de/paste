#include "paste.h"

void fn10001340()
{
	return;
}

void fn10006370()
{
	return;
}

word32 fn10007520(word32 dwArg08)
{
	word32 * esp_19 = fp - 0x04;
	if (dwArg08 == 0x01)
	{
		word32 esp_31;
		word32 ebp_32;
		byte SCZO_33;
		byte Z_34;
		word32 eax_35;
		beginthread();
		esp_19 = fp + ~0x07;
	}
	return *esp_19;
}

Eq_23 * fn1001F8A8(word32 dwArg04, word32 dwArg08, ptr32 & edxOut)
{
	struct Eq_23 * eax_26;
	struct Eq_28 * ecx_13 = dwArg04 + dwArg04->dw003C / 0x0040;
	struct Eq_23 * edx_16 = (ecx_13->w0014 + 0x02 + (word32) ecx_13->w0014 / 22)->w0006 + 0x03;
	*edxOut = edx_16;
	struct Eq_23 * esi_19 = edx_16 + (word32) ecx_13->w0006;
	if (edx_16 != esi_19)
	{
		do
		{
			if (dwArg08 >= edx_16->dw0000 && dwArg08 < edx_16->dw0008 + edx_16->dw000C)
			{
				eax_26 = edx_16;
				return eax_26;
			}
			edx_16 = edx_16 + 0x01;
			*edxOut = edx_16;
		} while (edx_16 != esi_19);
	}
	eax_26 = null;
	return eax_26;
}

byte fn1001F8EC(word32 dwArg00, ptr32 & ecxOut, ptr32 & edxOut)
{
	*edxOut = edx;
	*ecxOut = ecx;
	if (fn1002050F() != 0x00)
	{
		word32 edx_34 = fs->ptr0018->dw0004;
		*edxOut = edx_34;
l1001F90D:
		__lock();
		word32 eax_38;
		__cmpxchg(globals->dw1002D59C, edx_34, 0x00, out eax_38);
		__lock();
		word32 eax_45;
		__cmpxchg(globals->dw1002D59C, edx_34, 0x00, out eax_45);
		word32 ecx_44;
		*ecxOut = edx_34;
		if (eax_45 != 0x00)
		{
			if (edx_34 != eax_45)
				goto l1001F90D;
			return 0x01;
		}
		else
		{
			return 0x00;
			return 0x00;
		}
	}
	else
		return 0x00;
}

word32 fn1001F921(word32 edx)
{
	word32 edx_11;
	word32 eax_2 = fn1002050F();
	if (eax_2 != 0x00)
		edx_11 = fn1002036E(edx);
	else
	{
		word32 esp_16;
		word32 eax_17;
		byte SZO_18;
		byte C_19;
		byte Z_20;
		byte al_21;
		initialize_narrow_environment();
	}
	return edx_11;
}

bool fn1001F939(word32 ecx, ptr32 edi, ptr32 & edxOut, ptr32 & ebxOut, ptr32 & ebpOut, ptr32 & ediOut)
{
	*ediOut = edi;
	word32 edx_6;
	word32 ebx_7;
	word32 ebp_8;
	return fn1001FA0F(ecx, edi, 0x00, out edx_6, out ebx_7, out ebp_8) != 0x00;
}

byte fn1001F947()
{
	fn100206DE();
	if (true)
	{
		fn100206DE();
		if (true)
			return 0x01;
		fn100206DE();
	}
	return 0x00;
}

byte fn1001F966()
{
	fn100206DE();
	fn100206DE();
	return 0x01;
}

void fn1001F9A6()
{
	word32 eax_2 = fn1002050F();
	if (eax_2 == 0x00)
	{
		fn10001340();
		if (0x00 == 0x00)
		{
			word32 esp_30;
			word32 eax_31;
			byte SZO_32;
			byte C_33;
			byte Z_34;
			word32 ecx_35;
			cexit();
			return;
		}
		else
			return;
	}
	else
	{
		word32 esp_16;
		word32 eax_17;
		byte SZO_18;
		byte C_19;
		byte Z_20;
		word32 ecx_21;
		execute_onexit_table();
		return;
	}
}

void fn1001F9C9()
{
	fn100206DE();
	fn100206DE();
	return;
}

byte fn1001F9D6(word32 edx, word32 dwArg04, ptr32 & edxOut)
{
	if (dwArg04 == 0x00)
		globals->b1002D5B8 = 0x01;
	word32 edx_10;
	*edxOut = fn1002036E(edx);
	fn100206DE();
	if (true)
	{
		fn100206DE();
		if (true)
			return 0x01;
		fn100206DE();
	}
	return 0x00;
}

byte fn1001FA0F(word32 ecx, ptr32 edi, word32 dwArg04, ptr32 & edxOut, ptr32 & ebxOut, ptr32 & ebpOut)
{
	*ebxOut = ebx;
	*edxOut = edx;
	if (dwArg04 == 0x00 || dwArg04 == 0x01)
	{
		byte al_111;
		word32 eax_42 = fn1002050F();
		if (eax_42 != 0x00 && dwArg04 == 0x00)
		{
			word32 esp_141;
			word32 ebp_142;
			byte SCZO_143;
			word32 esi_144;
			byte SZO_145;
			byte C_146;
			byte Z_147;
			word32 eax_148;
			word32 ecx_149;
			byte al_150;
			word32 edi_151;
			byte cl_152;
			word16 ax_153;
			word16 cx_154;
			word32 edx_155;
			word32 ebx_156;
			initialize_onexit_table();
			if (eax_148 != 0x00)
				al_111 = 0x00;
			else
			{
				fp->dwFFFFFFE4 = 268621228;
				word32 esp_170;
				word32 ebp_171;
				byte SCZO_172;
				word32 esi_173;
				byte SZO_174;
				byte C_175;
				byte Z_176;
				word32 eax_177;
				word32 ecx_178;
				byte al_179;
				word32 edi_180;
				byte cl_181;
				word16 ax_182;
				word16 cx_183;
				word32 edx_184;
				word32 ebx_185;
				initialize_onexit_table();
				al_111 = 0x00 - (-eax_177 == 0x00) + 0x01;
			}
		}
		else
		{
			ui32 eax_74 = globals->dw1002D00C;
			ui32 eax_90 = __ror(eax_74 & 0x1F | ~0x00, (byte) (0x20 - (eax_74 & 0x1F))) ^ globals->dw1002D00C;
			globals->dw1002D5A0 = eax_90;
			globals->dw1002D5A4 = eax_90;
			globals->dw1002D5A8 = eax_90;
			globals->dw1002D5AC = eax_90;
			globals->dw1002D5B0 = eax_90;
			globals->dw1002D5B4 = eax_90;
			al_111 = 0x01;
		}
		word32 ebp_70;
		*ebpOut = ebp;
		return al_111;
	}
	else
	{
		fn100201CB(dwLoc1C, 0x05);
		int3();
		struct Eq_266 * ebp_206;
		word32 edi_207;
		fn100202F0(ecx, ebx, dwArg04, edi, dwLoc24, 0x1002C200, 0x08, out ebp_206, out edi_207);
		*(ebp_206 - 0x04) = *(ebp_206 - 0x04) & 0x00;
		if ((word16 *) 0x10000000 != 23117)
		{
			word32 ebx_223;
			word32 ebp_224;
			word32 esi_225;
			return fn1001FB24(ebp_206, out ebx_223, out ebp_224, out esi_225);
		}
		else
		{
			word32 edx_215;
			word32 ebx_216;
			word32 ebp_217;
			word32 esi_218;
			return fn1001FAC4(ebp_206, out edx_215, out ebx_216, out ebp_217, out esi_218);
		}
	}
}

word32 fn1001FAA6(word32 ecx, ui32 ebx, ptr32 esi, ptr32 edi, ptr32 & ebpOut, ptr32 & esiOut)
{
	struct Eq_266 * ebp_11;
	word32 edi_12;
	fn100202F0(ecx, ebx, esi, edi, dwLoc0C, 0x1002C200, 0x08, out ebp_11, out edi_12);
	*(ebp_11 - 0x04) = *(ebp_11 - 0x04) & 0x00;
	if ((word16 *) 0x10000000 != 23117)
	{
		word32 ebx_38;
		word32 ebp_39;
		word32 esi_40;
		fn1001FB24(ebp_11, out ebx_38, out ebp_39, out esi_40);
		return edx;
	}
	else
	{
		word32 edx_28;
		word32 ebx_29;
		struct Eq_266 * ebp_30;
		word32 esi_31;
		fn1001FAC4(ebp_11, out edx_28, out ebx_29, out ebp_30, out esi_31);
		return edx_28;
	}
}

byte fn1001FAC4(Eq_266 * ebp, ptr32 & edxOut, ptr32 & ebxOut, ptr32 & ebpOut, ptr32 & esiOut)
{
	*edxOut = edx;
	struct Eq_478 * eax_3 = (struct Eq_478 **) 0x1000003C;
	if (eax_3->dw10000000 != 0x4550)
	{
		word32 ebx_77;
		word32 ebp_78;
		word32 esi_79;
		return fn1001FB24(ebp, out ebx_77, out ebp_78, out esi_79);
	}
	else if (eax_3->w10000018 != 0x010B)
	{
		word32 ebx_69;
		word32 ebp_70;
		word32 esi_71;
		return fn1001FB24(ebp, out ebx_69, out ebp_70, out esi_71);
	}
	else
	{
		*(v3 - 0x04) = ebp->dw0008 - 0x10000000;
		*(v3 - 0x08) = 0x10000000;
		word32 edx_39;
		struct Eq_509 * eax_40 = fn1001F8A8(dwArg00, dwArg04, out edx_39);
		if (eax_40 == null)
		{
			word32 ebx_64;
			word32 ebp_65;
			word32 esi_66;
			return fn1001FB24(ebp, out ebx_64, out ebp_65, out esi_66);
		}
		else if ((eax_40->dw0024 & 0x80000000) != 0x00)
		{
			word32 ebx_59;
			word32 ebp_60;
			word32 esi_61;
			return fn1001FB24(ebp, out ebx_59, out ebp_60, out esi_61);
		}
		else
		{
			*(ebp - 0x04) = ~0x01;
			word32 ebx_54;
			word32 ebp_55;
			word32 esi_56;
			return fn1001FB24(ebp, out ebx_54, out ebp_55, out esi_56);
		}
	}
}

byte fn1001FB24(Eq_266 * ebp, ptr32 & ebxOut, ptr32 & ebpOut, ptr32 & esiOut)
{
	*(ebp - 0x04) = ~0x01;
	word32 ebx_12;
	word32 ebp_13;
	word32 esi_14;
	word32 edi_15;
	fn10020336(ebp, dwLoc04, dwArg00, dwArg04, dwArg08, dwArg0C, out ebx_12, out ebp_13, out esi_14, out edi_15);
	return 0x00;
}

void fn1001FB33(byte bArg04)
{
	if (fn1002050F() != 0x00 && bArg04 == 0x00)
		globals->dw1002D59C = 0x00;
	return;
}

void fn1001FB50(word32 dwArg04, byte bArg08)
{
	if (globals->b1002D5B8 == 0x00 || bArg08 == 0x00)
	{
		fn100206DE();
		fn100206DE();
	}
	return;
}

word32 fn1001FB78(word32 dwArg04)
{
	word32 eax_24;
	ui32 eax_7 = globals->dw1002D00C;
	byte cl_11 = (byte) (eax_7 & 0x1F);
	word32 eax_17 = __ror(eax_7 ^ globals->dw1002D5A0, cl_11);
	if (eax_17 == ~0x00)
	{
		word32 esp_40;
		word32 ebp_41;
		word32 ecx_43;
		byte SZO_44;
		byte C_45;
		byte cl_46;
		byte SCZO_47;
		byte Z_48;
		crt_atexit();
	}
	else
	{
		word32 esp_52;
		word32 ebp_53;
		word32 ecx_55;
		byte SZO_56;
		byte C_57;
		byte cl_58;
		byte SCZO_59;
		byte Z_60;
		register_onexit_function();
	}
	return ~(0x00 - (-eax_24 == 0x00)) & dwArg04;
}

void fn1001FBB3(word32 dwArg04)
{
	fn1001FB78(dwArg04);
	return;
}

word32 fn1001FC4D(word32 ecx, word32 edx, ui32 ebx, ptr32 esi, ptr32 edi, word32 dwArg04, word32 dwArg08, word32 dwArg0C, ptr32 & ecxOut, ptr32 & edxOut, ptr32 & ebxOut, ptr32 & esiOut, ptr32 & ediOut)
{
	*edxOut = edx;
	*ebxOut = ebx;
	*esiOut = esi;
	*ediOut = edi;
	*ecxOut = ecx;
	word32 eax_107;
	if (dwArg08 != 0x00)
	{
		if (dwArg08 != 0x01)
		{
			byte al_59;
			if (dwArg08 != 0x02)
			{
				if (dwArg08 != 0x03)
				{
					eax_107 = 0x01;
					return eax_107;
				}
				al_59 = fn1001F966();
			}
			else
				al_59 = fn1001F947();
			eax_107 = (word32) al_59;
			return eax_107;
		}
		word32 edx_89;
		word32 ebx_90;
		word32 esi_91;
		word32 edi_92;
		eax_107 = fn1001FCA0(ecx, edx, ebx, esi, edi, out edx_89, out ebx_90, out esi_91, out edi_92);
	}
	else
	{
		word32 edx_103;
		word32 ebx_104;
		word32 esi_105;
		word32 edi_106;
		eax_107 = fn1001FDB2(ecx, ebx, esi, edi, out edx_103, out ebx_104, out esi_105, out edi_106);
	}
	word32 ecx_45;
	*ecxOut = *(fp - 0x08);
	return eax_107;
}

word32 fn1001FCA0(word32 ecx, word32 edx, ui32 ebx, ptr32 esi, ptr32 edi, ptr32 & edxOut, ptr32 & ebxOut, ptr32 & esiOut, ptr32 & ediOut)
{
	word32 eax_118;
	ptr32 edi_12;
	struct Eq_266 * ebp_109;
	fn100202F0(ecx, ebx, esi, edi, dwLoc0C, 0x1002C240, 0x10, out ebp_109, out edi_12);
	*(fp - 0x0C) = 0x00;
	ptr32 esp_182 = fp - 0x08;
	word32 edx_18;
	if (fn1001F9D6(edx, dwArg00, out edx_18) != 0x00)
	{
		word32 ecx_64;
		word32 edx_65;
		*(ebp_109 - 0x1D) = fn1001F8EC(0x10, out ecx_64, out edx_65);
		*(ebp_109 - 0x19) = 0x01;
		*(ebp_109 - 0x04) = *(ebp_109 - 0x04) & 0x00;
		byte bl_172 = 0x01;
		if (globals->dw1002D598 != 0x00)
		{
			*(fp - 0x0C) = 0x07;
			fn100201CB(0x10, dwArg00);
			esp_182 = fp - 0x0C;
		}
		globals->dw1002D598 = 0x01;
		word32 edx_77;
		ui32 ebx_176;
		ptr32 edi_177;
		byte al_81 = fn1001F939(ecx_64, edi_12, out edx_77, out ebx_176, out ebp_109, out edi_177);
		if (al_81 != 0x00)
		{
			word32 edi_155;
			byte bl_156 = fn100205F8(out edi_155);
			ptr32 * esp_158 = esp_182 - 0x04;
			*esp_158 = 0x10020623;
			fn1001FBB3(dwArg00);
			fn100205B7();
			*esp_158 = 0x100205C3;
			fn1001FBB3(dwArg00);
			fn100205D5();
			*esp_158 = 0x100221D4;
			*(esp_158 - 0x04) = 0x100221CC;
			word32 * esp_164;
			word32 ecx_165;
			byte al_166;
			byte SZO_167;
			byte C_168;
			byte Z_169;
			word32 eax_170;
			byte SCZO_173;
			word32 esi_174;
			word32 edx_175;
			initterm_e();
			esp_182 = esp_164 + 0x01;
			if (false)
			{
				word32 edx_186 = fn1001F921(edx_175);
				*edxOut = edx_186;
				if (0x01 != 0x00)
				{
					*esp_164 = 0x100221C8;
					*(esp_164 - 0x04) = 0x100221B0;
					word32 esp_194;
					word32 ecx_195;
					byte al_196;
					byte SZO_197;
					byte C_198;
					byte Z_199;
					word32 eax_200;
					byte bl_202;
					byte SCZO_203;
					word32 esi_204;
					word32 edx_205;
					word32 ebx_206;
					initterm();
					globals->dw1002D598 = 0x02;
					*(ebp_109 - 0x19) = 0x00;
					esp_182 = esp_194 + 0x04;
					bl_172 = 0x00;
					ebx_176 = DPB(ebx_206, 0x00, 0);
				}
			}
		}
		*(ebp_109 - 0x04) = ~0x01;
		word32 ecx_97 = fn1001FDA8(ebp_109);
		if (bl_172 == 0x00)
		{
			fn100205F2();
			if (globals->dw100307F4 != 0x00)
			{
				ptr32 * esp_121 = esp_182 - 0x04;
				*esp_121 = 0x100307F4;
				<anonymous> ** esi_124;
				word32 edx_125 = fn1001FAA6(ecx_97, ebx_176, 0x100307F4, edi_177, out ebp_109, out esi_124);
				*edxOut = edx_125;
				if (0x00 != 0x00)
				{
					*esp_121 = ebp_109->ptr000C;
					*(esp_121 - 0x04) = 0x02;
					*(esp_121 - 0x08) = ebp_109->dw0008;
					<anonymous> * esi_139 = *esi_124;
					fn100202E6();
					word32 esp_141;
					word32 ecx_142;
					byte al_143;
					byte SZO_144;
					byte C_145;
					byte Z_146;
					word32 eax_147;
					byte bl_149;
					byte SCZO_150;
					word32 esi_151;
					word32 edx_152;
					word32 ebx_153;
					word32 edi_154;
					esi_139();
				}
			}
			globals->dw1002D5BC = globals->dw1002D5BC + 0x01;
			eax_118 = 0x01;
l1001FD9F:
			word32 ebx_40;
			word32 ebp_41;
			word32 esi_42;
			word32 edi_43;
			fn10020336(ebp_109, 0x10, dwArg00, dwArg04, dwArg08, dwArg0C, out ebx_40, out ebp_41, out esi_42, out edi_43);
			return eax_118;
		}
	}
	eax_118 = 0x00;
	goto l1001FD9F;
}

word32 fn1001FDA8(Eq_266 * ebp)
{
	word32 v4_4 = *(ebp - 0x1D);
	fn1001FB33((byte) v4_4);
	return v4_4;
}

word32 fn1001FDB2(word32 ecx, ui32 ebx, ptr32 esi, ptr32 edi, ptr32 & edxOut, ptr32 & ebxOut, ptr32 & esiOut, ptr32 & ediOut)
{
	*edxOut = edx;
	word32 eax_23;
	struct Eq_266 * ebp_11;
	word32 edi_12;
	fn100202F0(ecx, ebx, esi, edi, dwLoc0C, 268616288, 0x0C, out ebp_11, out edi_12);
	ptr32 esp_4 = fp - 0x08;
	int32 eax_15 = globals->dw1002D5BC;
	if (eax_15 <= 0x00)
		eax_23 = 0x00;
	else
	{
		globals->dw1002D5BC = eax_15 - 0x01;
		word32 ecx_53;
		word32 edx_54;
		*(ebp_11 - 0x1C) = fn1001F8EC(0x0C, out ecx_53, out edx_54);
		*(ebp_11 - 0x04) = *(ebp_11 - 0x04) & 0x00;
		if (globals->dw1002D598 != 0x02)
		{
			*(fp - 0x0C) = 0x07;
			fn100201CB(0x0C, dwArg00);
			esp_4 = fp - 0x0C;
		}
		fn1001F9A6();
		globals->dw1002D598 = globals->dw1002D598 & 0x00;
		*(ebp_11 - 0x04) = ~0x01;
		fn1001FE20(ebp_11);
		word32 * esp_68 = esp_4 - 0x04;
		*esp_68 = 0x00;
		*(esp_68 - 0x04) = ebp_11->dw0008;
		fn1001FB50(dwArg00, bArg04);
		eax_23 = 0x01;
	}
	word32 ebx_32;
	word32 ebp_33;
	word32 esi_34;
	word32 edi_35;
	fn10020336(ebp_11, 0x0C, dwArg00, dwArg04, dwArg08, dwArg0C, out ebx_32, out ebp_33, out esi_34, out edi_35);
	return eax_23;
}

void fn1001FE20(Eq_266 * ebp)
{
	fn1001F9C9();
	fn1001FB33((byte) *(ebp - 0x1C));
	return;
}

void fn1001FE2F(word32 ecx, word32 edx, ui32 ebx, ptr32 esi, ptr32 edi)
{
	ui32 ebx_119;
	word32 edi_12;
	struct Eq_266 * ebp_109;
	word32 ecx_13 = fn100202F0(ecx, ebx, esi, edi, dwLoc0C, 0x1002C280, 0x0C, out ebp_109, out edi_12);
	*(ebp_109 - 0x04) = *(ebp_109 - 0x04) & 0x00;
	ptr32 edi_18 = ebp_109->ptr000C;
	if (edi_18 != 0x01 && edi_18 != 0x02)
		ebx_119 = ebp_109->dw0008;
	else
	{
		*(fp - 0x0C) = ebp_109->dw0010;
		*(fp - 0x10) = edi_18;
		ui32 ebx_234 = ebp_109->dw0008;
		*(fp - 0x14) = ebx_234;
		word32 esi_238;
		word32 ecx_239 = fn1001FF38(dwArg00, dwArg04, dwArg08, out ebp_109, out esi_238);
		*(ebp_109 - 0x1C) = 0x01;
		if (0x01 == 0x00)
			goto l1001FF29;
		*(fp - 0x0C) = ebp_109->dw0010;
		*(fp - 0x10) = edi_18;
		*(fp - 0x14) = ebx_234;
		word32 esi_257;
		word32 eax_259 = fn1001FC4D(ecx_239, edx, ebx_234, 0x01, edi_18, dwArg00, dwArg04, dwArg08, out ecx_13, out edx, out ebx_119, out esi_257, out edi_18);
		*(ebp_109 - 0x1C) = eax_259;
		if (eax_259 == 0x00)
		{
l1001FF29:
			*(ebp_109 - 0x04) = ~0x01;
			word32 ebx_35;
			word32 ebp_36;
			word32 esi_37;
			word32 edi_38;
			fn10020336(ebp_109, 0x0C, dwArg00, dwArg04, dwArg08, dwArg0C, out ebx_35, out ebp_36, out esi_37, out edi_38);
			return;
		}
	}
	struct Eq_1283 * esp_227 = fp - 0x08;
	if (edi_18 == 0x01)
	{
		*(fp - 0x0C) = ebx_119;
		struct Eq_1283 * esp_213;
		byte SZO_215;
		byte C_216;
		byte SCZO_218;
		byte Z_219;
		word32 esi_221;
		word32 eax_222;
		word32 ecx_223;
		_telemetry_main_invoke_trigger();
		ecx_13 = esp_213->dwFFFFFFFC;
		esp_227 = esp_213;
	}
	word32 ecx_123;
	ptr32 edi_122;
	ptr32 esi_121;
	word32 edx_115;
	struct Eq_1346 * esp_124;
	ui32 * esp_63 = esp_227 - 0x04;
	*esp_63 = ebp_109->dw0010;
	*(esp_63 - 0x04) = edi_18;
	*(esp_63 - 0x08) = ebx_119;
	struct Eq_266 * ebp_69 = fn10007520(dwArg04);
	*(ebp_69 - 0x1C) = 0x01;
	ptr32 esi_71 = 0x01;
	edx_115 = edx;
	ebp_109 = ebp_69;
	esi_121 = esi_71;
	edi_122 = edi_18;
	ecx_123 = ecx_13;
	if (edi_18 == 0x01)
	{
		edx_115 = edx;
		ebp_109 = ebp_69;
		esi_121 = esi_71;
		edi_122 = edi_18;
		ecx_123 = ecx_13;
		if (false)
		{
			*esp_63 = ebp_69->dw0010;
			*(esp_63 - 0x04) = 0x01;
			*(esp_63 - 0x08) = ebx_119;
			struct Eq_266 * ebp_184 = fn10007520(dwArg04);
			*esp_63 = ebp_184->dw0010;
			*(esp_63 - 0x04) = 0x01;
			*(esp_63 - 0x08) = ebx_119;
			word32 ecx_193;
			word32 esi_196;
			fn1001FC4D(ecx_13, edx, ebx_119, 0x01, edi_18, dwArg00, dwArg04, dwArg08, out ecx_193, out edx_115, out ebx_119, out esi_196, out edi_122);
			*esp_63 = ebp_184->dw0010;
			*(esp_63 - 0x04) = esi_196;
			*(esp_63 - 0x08) = ebx_119;
			ecx_123 = fn1001FF38(dwArg00, dwArg04, dwArg08, out ebp_109, out esi_121);
		}
		if (edi_122 == 0x01 && esi_121 == 0x00)
		{
l1001FED1:
			*esp_63 = ebx_119;
			struct Eq_1346 * esp_131;
			byte SZO_133;
			byte C_134;
			byte SCZO_136;
			byte Z_137;
			word32 eax_140;
			word32 ecx_141;
			_telemetry_main_return_trigger();
			ecx_123 = esp_131->dwFFFFFFFC;
			esp_124 = esp_131;
			if (edi_122 == 0x00)
				goto l1001FEE1;
l1001FEDC:
			if (edi_122 != 0x03)
				goto l1001FF29;
l1001FEE1:
			ui32 * esp_84 = esp_124 - 0x04;
			*esp_84 = ebp_109->dw0010;
			*(esp_84 - 0x04) = edi_122;
			*(esp_84 - 0x08) = ebx_119;
			word32 ecx_90;
			word32 edx_91;
			word32 ebx_92;
			word32 esi_93;
			word32 edi_94;
			word32 eax_95 = fn1001FC4D(ecx_123, edx_115, ebx_119, esi_121, edi_122, dwArg00, dwArg04, dwArg08, out ecx_90, out edx_91, out ebx_92, out esi_93, out edi_94);
			*(ebp_109 - 0x1C) = eax_95;
			if (eax_95 != 0x00)
			{
				*esp_84 = ebp_109->dw0010;
				*(esp_84 - 0x04) = edi_94;
				*(esp_84 - 0x08) = ebx_92;
				word32 esi_110;
				fn1001FF38(dwArg00, dwArg04, dwArg08, out ebp_109, out esi_110);
				*(ebp_109 - 0x1C) = 0x01;
			}
			goto l1001FF29;
		}
	}
	esp_124 = (struct Eq_1346 *) (esp_63 + 0x01);
	if (edi_122 != 0x00)
		goto l1001FEDC;
	goto l1001FED1;
}

word32 fn1001FF38(word32 dwArg04, word32 dwArg08, word32 dwArg0C, Eq_1261 * & ebpOut, ptr32 & esiOut)
{
	struct Eq_1560 * esp_22 = fp - 0x08;
	<anonymous> * esi_10 = globals->ptr10022268;
	if (esi_10 != null)
	{
		fn100202E6();
		word32 ebp_52;
		word32 esi_53;
		byte SZO_54;
		byte C_55;
		byte Z_56;
		word32 eax_57;
		esi_10();
	}
	word32 esi_23;
	*esiOut = esp_22->dw0000;
	word32 ebp_25;
	*ebpOut = esp_22->dw0004;
	return ecx;
}

BOOL DllMain(HANDLE hModule, DWORD dwReason, LPVOID lpReserved)
{
	if (dwReason == 0x01)
		ecx = fn1002051B();
	fn1001FE2F(ecx, edx, ebx, esi, edi);
	return eax;
}

void fn100201CB(word32 dwArg00, word32 dwArg04)
{
	if (IsProcessorFeaturePresent(0x17) == 0x00)
	{
		globals->dw1002D8DC = 0x00;
		memset(fp + ~0x0327, 0x00, 0x02CC);
		memset(fp - 0x5C, 0x00, 0x50);
		byte bl_90 = 0x00 - (0x01 - IsDebuggerPresent() == 0x00);
		SetUnhandledExceptionFilter(null);
		if (UnhandledExceptionFilter(fp - 0x0C) == 0x00)
			globals->dw1002D8DC = globals->dw1002D8DC & 0x00 - (-((word32) (bl_90 + 0x01)) == 0x00);
		return;
	}
	else
		__fastfail(dwArg04);
}

void fn100202E6()
{
	word32 esp_3;
	globals->ptr100221AC();
	return;
}

word32 fn100202F0(word32 ecx, ui32 ebx, ptr32 esi, ptr32 edi, word32 dwArg00, word32 dwArg04, word32 dwArg08, ptr32 & ebpOut, ptr32 & ediOut)
{
	*ediOut = edi;
	ptr32 esp_14 = fp - 0x08 - dwArg08;
	*(esp_14 - 0x04) = ebx;
	*(esp_14 - 0x08) = esi;
	*(esp_14 - 0x0C) = edi;
	ui32 eax_24 = globals->dw1002D00C;
	*(esp_14 - 0x10) = eax_24 ^ fp + 0x08;
	*(esp_14 - 0x14) = dwArg00;
	fs->ptr0000 = fp - 0x08;
	word32 ebp_13;
	*ebpOut = fp + 0x08;
	ui32 v11_26 = dwArg04 ^ eax_24;
	if (ecx == 0x00)
	{
		word32 ebx_54;
		word32 ebp_55;
		word32 esi_56;
		word32 edi_57;
		return fn10020336(fp + 0x08, v11_26, ~0x01, ebp, dwArg0C, dwArg10, out ebx_54, out ebp_55, out esi_56, out edi_57);
	}
	else
		return ecx;
}

word32 fn10020336(Eq_266 * ebp, ui32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, ptr32 & ebxOut, ptr32 & ebpOut, ptr32 & esiOut, ptr32 & ediOut)
{
	fs->dw0000 = *(ebp - 0x10);
	word32 ebp_22 = ebp->dw0000;
	*ebpOut = ebp_22;
	ebp->dw0000 = dwArg00;
	word32 edi_14 = dwArg08;
	*ediOut = edi_14;
	word32 esi_17 = dwArg0C;
	*esiOut = esi_17;
	word32 ebx_20 = dwArg10;
	*ebxOut = ebx_20;
	if (dwArg00 == 0x00)
	{
		*(ebp - 0x04) = ebp_22;
		*(ebp - 0x08) = ebp->dw0010;
		*(ebp - 0x0C) = ebp->ptr000C;
		*(ebp - 0x10) = ebp->dw0008;
		*(ebp - 0x14) = ebp->dw0004;
		*(ebp - 0x18) = 0x1001F500;
		*(ebp - 0x1C) = 0x1002D00C;
		struct Eq_1820 * esp_58;
		word32 ebp_59;
		word32 ecx_60;
		struct Eq_1823 * fs_61;
		word32 edi_62;
		word32 esi_63;
		word32 ebx_64;
		byte SCZO_65;
		except_handler4_common();
		word32 ebp_69;
		*ebpOut = esp_58->dw0014;
		return ecx_60;
	}
	else
		return dwArg00;
}

word32 fn1002036E(word32 edx)
{
	globals->dw1002D8E4 = globals->dw1002D8E4 & 0x00;
	globals->dw1002D010 = globals->dw1002D010 | 0x01;
	if (IsProcessorFeaturePresent(0x0A) != 0x00)
	{
		ui32 edi_140;
		globals->dw1002D010 = globals->dw1002D010 | 0x02;
		globals->dw1002D8E4 = 0x01;
		int32 eax_91;
		word32 ebx_92;
		word32 ecx_93;
		word32 edx_94;
		__cpuid(0x00, 0x00, &eax_91, &ebx_92, &ecx_93, &edx_94);
		ui32 eax_129;
		word32 ebx_130;
		ui32 ecx_131;
		__cpuid(0x01, 0x00, &eax_129, &ebx_130, &ecx_131, &edx);
		if (0x00 - (-((edx_94 ^ 0x49656E69 | ecx_93 ^ 1818588270) | ebx_92 ^ 1970169159) == 0x00) != 0x01 && ((eax_129 & 0x0FFF3FF0) == 0x000106C0 || ((eax_129 & 0x0FFF3FF0) == 0x00020660 || ((eax_129 & 0x0FFF3FF0) == 0x00020670 || ((eax_129 & 0x0FFF3FF0) == 0x00030650 || ((eax_129 & 0x0FFF3FF0) == 0x00030660 || (eax_129 & 0x0FFF3FF0) == 0x00030670))))))
		{
			ui32 edi_253 = globals->dw1002D8E8;
			globals->dw1002D8E8 = edi_253 | 0x01;
			edi_140 = edi_253 | 0x01;
		}
		else
			edi_140 = globals->dw1002D8E8;
		if (eax_91 >= 0x07)
		{
			word32 eax_218;
			ui32 ebx_219;
			word32 ecx_220;
			word32 edx_221;
			__cpuid(0x07, 0x00, &eax_218, &ebx_219, &ecx_220, &edx_221);
			if ((ebx_219 & 0x0200) != 0x00)
				globals->dw1002D8E8 = edi_140 | 0x02;
		}
		if ((ecx_131 & 0x00100000) != 0x00)
		{
			globals->dw1002D010 = globals->dw1002D010 | 0x04;
			globals->dw1002D8E4 = 0x02;
			if ((ecx_131 & 0x08000000) != 0x00 && (ecx_131 & 0x10000000) != 0x00)
			{
				word64 edx_eax_180 = __xgetbv(0x00);
				edx = SLICE(edx_eax_180, word32, 32);
				if (((word32) edx_eax_180 & 0x06) == 0x06 && true)
				{
					ui32 eax_196 = globals->dw1002D010;
					globals->dw1002D8E4 = 0x03;
					globals->dw1002D010 = eax_196 | 0x08;
					if ((bLoc18 & 0x20) != 0x00)
					{
						globals->dw1002D8E4 = 0x05;
						globals->dw1002D010 = eax_196 | 0x08 | 0x20;
					}
				}
			}
		}
	}
	return edx;
}

word32 fn1002050F()
{
	return (word32) (globals->dw1002D014 != 0x00);
}

ui32 fn1002051B()
{
	ui32 eax_16 = globals->dw1002D00C;
	if (eax_16 != 0xBB40E64E && (eax_16 & 0xFFFF0000) != 0x00)
		globals->dw1002D008 = ~eax_16;
	else
	{
		GetSystemTimeAsFileTime(fp - 0x10);
		ui32 v14_55 = dwLoc0C & 0x00 ^ dwLoc10 & 0x00 ^ GetCurrentThreadId() ^ GetCurrentProcessId();
		QueryPerformanceCounter(fp - 0x18);
		ui32 ecx_69 = dwLoc14 ^ dwLoc18 ^ v14_55 ^ fp - 0x08;
		if (ecx_69 == 0xBB40E64E)
			ecx_69 = ~0x44BF19B0;
		else if ((ecx_69 & 0xFFFF0000) == 0x00)
			ecx_69 = ecx_69 | (ecx_69 | 0x4711) << 0x10;
		globals->dw1002D00C = ecx_69;
		ecx = ~ecx_69;
		globals->dw1002D008 = ecx;
	}
	return ecx;
}

void fn100205B7()
{
	InitializeSListHead(&globals->u1002D8F0);
	return;
}

void fn100205CF()
{
	return;
}

void fn100205D5()
{
	fn10006370();
	word32 ecx_3 = globals->dw100306CC;
	globals->dw100306C8 = globals->dw100306C8 | 0x04;
	globals->dw100306CC = ecx_3;
	fn100205CF();
	word32 ecx_9 = globals->dw1002D8FC;
	globals->dw1002D8F8 = globals->dw1002D8F8 | 0x02;
	globals->dw1002D8FC = ecx_9;
	return;
}

void fn100205F2()
{
	return;
}

byte fn100205F8(ptr32 & ediOut)
{
	*ediOut = edi;
	struct Eq_2111 * esp_24 = fp - 0x08;
	word32 * esi_37 = &globals->dw1002B03C;
	if (false)
	{
		word32 * esp_32 = fp - 0x0C;
		do
		{
			<anonymous> * edi_41 = *esi_37;
			if (edi_41 != null)
			{
				fn100202E6();
				word32 ebx_60;
				byte SCZO_62;
				byte C_63;
				word32 edi_64;
				byte SZO_65;
				byte Z_66;
				word32 ecx_67;
				byte bl_68;
				edi_41();
			}
			esi_37 = esi_37 + 0x01;
		} while (esi_37 < &globals->dw1002B03C);
		word32 edi_56;
		*ediOut = *esp_32;
		esp_24 = (struct Eq_2111 *) (esp_32 + 0x01);
	}
	return (byte) esp_24->dw0004;
}

void fn100206DE()
{
	return;
}

