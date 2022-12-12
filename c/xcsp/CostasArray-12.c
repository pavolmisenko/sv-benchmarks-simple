#include <lamp.h>
// This file is part of the SV-Benchmarks collection of verification tasks:
// https://github.com/sosy-lab/sv-benchmarks
//
// SPDX-FileCopyrightText: 2016 Gilles Audemard
// SPDX-FileCopyrightText: 2020 Dirk Beyer <https://www.sosy-lab.org>
// SPDX-FileCopyrightText: 2020 The SV-Benchmarks Community
//
// SPDX-License-Identifier: MIT

extern void abort(void) __attribute__((__nothrow__, __leaf__))
__attribute__((__noreturn__));
extern void __assert_fail(const char *, const char *, unsigned int,
                          const char *) __attribute__((__nothrow__, __leaf__))
__attribute__((__noreturn__));
void reach_error() { __assert_fail("0", "CostasArray-12.c", 5, "reach_error"); }
void assume(int cond) {
  if (!cond)
    abort();
}
int main() {
  int cond0;
  int dummy = 0;
  int N;
  int var0;
  var0 = __lamp_any_i32();
  assume(var0 >= 1);
  assume(var0 <= 12);
  int var1;
  var1 = __lamp_any_i32();
  assume(var1 >= 1);
  assume(var1 <= 12);
  int var2;
  var2 = __lamp_any_i32();
  assume(var2 >= 1);
  assume(var2 <= 12);
  int var3;
  var3 = __lamp_any_i32();
  assume(var3 >= 1);
  assume(var3 <= 12);
  int var4;
  var4 = __lamp_any_i32();
  assume(var4 >= 1);
  assume(var4 <= 12);
  int var5;
  var5 = __lamp_any_i32();
  assume(var5 >= 1);
  assume(var5 <= 12);
  int var6;
  var6 = __lamp_any_i32();
  assume(var6 >= 1);
  assume(var6 <= 12);
  int var7;
  var7 = __lamp_any_i32();
  assume(var7 >= 1);
  assume(var7 <= 12);
  int var8;
  var8 = __lamp_any_i32();
  assume(var8 >= 1);
  assume(var8 <= 12);
  int var9;
  var9 = __lamp_any_i32();
  assume(var9 >= 1);
  assume(var9 <= 12);
  int var10;
  var10 = __lamp_any_i32();
  assume(var10 >= 1);
  assume(var10 <= 12);
  int var11;
  var11 = __lamp_any_i32();
  assume(var11 >= 1);
  assume(var11 <= 12);
  int var12;
  var12 = __lamp_any_i32();
  assume(var12 >= -11);
  assume(var12 <= 11);
  assume(var12 != 0);
  int var13;
  var13 = __lamp_any_i32();
  assume(var13 >= -11);
  assume(var13 <= 11);
  assume(var13 != 0);
  int var14;
  var14 = __lamp_any_i32();
  assume(var14 >= -11);
  assume(var14 <= 11);
  assume(var14 != 0);
  int var15;
  var15 = __lamp_any_i32();
  assume(var15 >= -11);
  assume(var15 <= 11);
  assume(var15 != 0);
  int var16;
  var16 = __lamp_any_i32();
  assume(var16 >= -11);
  assume(var16 <= 11);
  assume(var16 != 0);
  int var17;
  var17 = __lamp_any_i32();
  assume(var17 >= -11);
  assume(var17 <= 11);
  assume(var17 != 0);
  int var18;
  var18 = __lamp_any_i32();
  assume(var18 >= -11);
  assume(var18 <= 11);
  assume(var18 != 0);
  int var19;
  var19 = __lamp_any_i32();
  assume(var19 >= -11);
  assume(var19 <= 11);
  assume(var19 != 0);
  int var20;
  var20 = __lamp_any_i32();
  assume(var20 >= -11);
  assume(var20 <= 11);
  assume(var20 != 0);
  int var21;
  var21 = __lamp_any_i32();
  assume(var21 >= -11);
  assume(var21 <= 11);
  assume(var21 != 0);
  int var22;
  var22 = __lamp_any_i32();
  assume(var22 >= -11);
  assume(var22 <= 11);
  assume(var22 != 0);
  int var23;
  var23 = __lamp_any_i32();
  assume(var23 >= -11);
  assume(var23 <= 11);
  assume(var23 != 0);
  int var24;
  var24 = __lamp_any_i32();
  assume(var24 >= -11);
  assume(var24 <= 11);
  assume(var24 != 0);
  int var25;
  var25 = __lamp_any_i32();
  assume(var25 >= -11);
  assume(var25 <= 11);
  assume(var25 != 0);
  int var26;
  var26 = __lamp_any_i32();
  assume(var26 >= -11);
  assume(var26 <= 11);
  assume(var26 != 0);
  int var27;
  var27 = __lamp_any_i32();
  assume(var27 >= -11);
  assume(var27 <= 11);
  assume(var27 != 0);
  int var28;
  var28 = __lamp_any_i32();
  assume(var28 >= -11);
  assume(var28 <= 11);
  assume(var28 != 0);
  int var29;
  var29 = __lamp_any_i32();
  assume(var29 >= -11);
  assume(var29 <= 11);
  assume(var29 != 0);
  int var30;
  var30 = __lamp_any_i32();
  assume(var30 >= -11);
  assume(var30 <= 11);
  assume(var30 != 0);
  int var31;
  var31 = __lamp_any_i32();
  assume(var31 >= -11);
  assume(var31 <= 11);
  assume(var31 != 0);
  int var32;
  var32 = __lamp_any_i32();
  assume(var32 >= -11);
  assume(var32 <= 11);
  assume(var32 != 0);
  int var33;
  var33 = __lamp_any_i32();
  assume(var33 >= -11);
  assume(var33 <= 11);
  assume(var33 != 0);
  int var34;
  var34 = __lamp_any_i32();
  assume(var34 >= -11);
  assume(var34 <= 11);
  assume(var34 != 0);
  int var35;
  var35 = __lamp_any_i32();
  assume(var35 >= -11);
  assume(var35 <= 11);
  assume(var35 != 0);
  int var36;
  var36 = __lamp_any_i32();
  assume(var36 >= -11);
  assume(var36 <= 11);
  assume(var36 != 0);
  int var37;
  var37 = __lamp_any_i32();
  assume(var37 >= -11);
  assume(var37 <= 11);
  assume(var37 != 0);
  int var38;
  var38 = __lamp_any_i32();
  assume(var38 >= -11);
  assume(var38 <= 11);
  assume(var38 != 0);
  int var39;
  var39 = __lamp_any_i32();
  assume(var39 >= -11);
  assume(var39 <= 11);
  assume(var39 != 0);
  int var40;
  var40 = __lamp_any_i32();
  assume(var40 >= -11);
  assume(var40 <= 11);
  assume(var40 != 0);
  int var41;
  var41 = __lamp_any_i32();
  assume(var41 >= -11);
  assume(var41 <= 11);
  assume(var41 != 0);
  int var42;
  var42 = __lamp_any_i32();
  assume(var42 >= -11);
  assume(var42 <= 11);
  assume(var42 != 0);
  int var43;
  var43 = __lamp_any_i32();
  assume(var43 >= -11);
  assume(var43 <= 11);
  assume(var43 != 0);
  int var44;
  var44 = __lamp_any_i32();
  assume(var44 >= -11);
  assume(var44 <= 11);
  assume(var44 != 0);
  int var45;
  var45 = __lamp_any_i32();
  assume(var45 >= -11);
  assume(var45 <= 11);
  assume(var45 != 0);
  int var46;
  var46 = __lamp_any_i32();
  assume(var46 >= -11);
  assume(var46 <= 11);
  assume(var46 != 0);
  int var47;
  var47 = __lamp_any_i32();
  assume(var47 >= -11);
  assume(var47 <= 11);
  assume(var47 != 0);
  int var48;
  var48 = __lamp_any_i32();
  assume(var48 >= -11);
  assume(var48 <= 11);
  assume(var48 != 0);
  int var49;
  var49 = __lamp_any_i32();
  assume(var49 >= -11);
  assume(var49 <= 11);
  assume(var49 != 0);
  int var50;
  var50 = __lamp_any_i32();
  assume(var50 >= -11);
  assume(var50 <= 11);
  assume(var50 != 0);
  int var51;
  var51 = __lamp_any_i32();
  assume(var51 >= -11);
  assume(var51 <= 11);
  assume(var51 != 0);
  int var52;
  var52 = __lamp_any_i32();
  assume(var52 >= -11);
  assume(var52 <= 11);
  assume(var52 != 0);
  int var53;
  var53 = __lamp_any_i32();
  assume(var53 >= -11);
  assume(var53 <= 11);
  assume(var53 != 0);
  int var54;
  var54 = __lamp_any_i32();
  assume(var54 >= -11);
  assume(var54 <= 11);
  assume(var54 != 0);
  int var55;
  var55 = __lamp_any_i32();
  assume(var55 >= -11);
  assume(var55 <= 11);
  assume(var55 != 0);
  int var56;
  var56 = __lamp_any_i32();
  assume(var56 >= -11);
  assume(var56 <= 11);
  assume(var56 != 0);
  int var57;
  var57 = __lamp_any_i32();
  assume(var57 >= -11);
  assume(var57 <= 11);
  assume(var57 != 0);
  int var58;
  var58 = __lamp_any_i32();
  assume(var58 >= -11);
  assume(var58 <= 11);
  assume(var58 != 0);
  int var59;
  var59 = __lamp_any_i32();
  assume(var59 >= -11);
  assume(var59 <= 11);
  assume(var59 != 0);
  int var60;
  var60 = __lamp_any_i32();
  assume(var60 >= -11);
  assume(var60 <= 11);
  assume(var60 != 0);
  int var61;
  var61 = __lamp_any_i32();
  assume(var61 >= -11);
  assume(var61 <= 11);
  assume(var61 != 0);
  int var62;
  var62 = __lamp_any_i32();
  assume(var62 >= -11);
  assume(var62 <= 11);
  assume(var62 != 0);
  int var63;
  var63 = __lamp_any_i32();
  assume(var63 >= -11);
  assume(var63 <= 11);
  assume(var63 != 0);
  int var64;
  var64 = __lamp_any_i32();
  assume(var64 >= -11);
  assume(var64 <= 11);
  assume(var64 != 0);
  int var65;
  var65 = __lamp_any_i32();
  assume(var65 >= -11);
  assume(var65 <= 11);
  assume(var65 != 0);
  int var66;
  var66 = __lamp_any_i32();
  assume(var66 >= -11);
  assume(var66 <= 11);
  assume(var66 != 0);
  int var67;
  var67 = __lamp_any_i32();
  assume(var67 >= -11);
  assume(var67 <= 11);
  assume(var67 != 0);
  int var68;
  var68 = __lamp_any_i32();
  assume(var68 >= -11);
  assume(var68 <= 11);
  assume(var68 != 0);
  int var69;
  var69 = __lamp_any_i32();
  assume(var69 >= -11);
  assume(var69 <= 11);
  assume(var69 != 0);
  int var70;
  var70 = __lamp_any_i32();
  assume(var70 >= -11);
  assume(var70 <= 11);
  assume(var70 != 0);
  int var71;
  var71 = __lamp_any_i32();
  assume(var71 >= -11);
  assume(var71 <= 11);
  assume(var71 != 0);
  int var72;
  var72 = __lamp_any_i32();
  assume(var72 >= -11);
  assume(var72 <= 11);
  assume(var72 != 0);
  int var73;
  var73 = __lamp_any_i32();
  assume(var73 >= -11);
  assume(var73 <= 11);
  assume(var73 != 0);
  int var74;
  var74 = __lamp_any_i32();
  assume(var74 >= -11);
  assume(var74 <= 11);
  assume(var74 != 0);
  int myvar0 = 1;
  assume(var0 != var1);
  assume(var0 != var2);
  assume(var0 != var3);
  assume(var0 != var4);
  assume(var0 != var5);
  assume(var0 != var6);
  assume(var0 != var7);
  assume(var0 != var8);
  assume(var0 != var9);
  assume(var0 != var10);
  assume(var0 != var11);
  assume(var1 != var2);
  assume(var1 != var3);
  assume(var1 != var4);
  assume(var1 != var5);
  assume(var1 != var6);
  assume(var1 != var7);
  assume(var1 != var8);
  assume(var1 != var9);
  assume(var1 != var10);
  assume(var1 != var11);
  assume(var2 != var3);
  assume(var2 != var4);
  assume(var2 != var5);
  assume(var2 != var6);
  assume(var2 != var7);
  assume(var2 != var8);
  assume(var2 != var9);
  assume(var2 != var10);
  assume(var2 != var11);
  assume(var3 != var4);
  assume(var3 != var5);
  assume(var3 != var6);
  assume(var3 != var7);
  assume(var3 != var8);
  assume(var3 != var9);
  assume(var3 != var10);
  assume(var3 != var11);
  assume(var4 != var5);
  assume(var4 != var6);
  assume(var4 != var7);
  assume(var4 != var8);
  assume(var4 != var9);
  assume(var4 != var10);
  assume(var4 != var11);
  assume(var5 != var6);
  assume(var5 != var7);
  assume(var5 != var8);
  assume(var5 != var9);
  assume(var5 != var10);
  assume(var5 != var11);
  assume(var6 != var7);
  assume(var6 != var8);
  assume(var6 != var9);
  assume(var6 != var10);
  assume(var6 != var11);
  assume(var7 != var8);
  assume(var7 != var9);
  assume(var7 != var10);
  assume(var7 != var11);
  assume(var8 != var9);
  assume(var8 != var10);
  assume(var8 != var11);
  assume(var9 != var10);
  assume(var9 != var11);
  assume(var10 != var11);
  assume(var12 != var13);
  assume(var12 != var14);
  assume(var12 != var15);
  assume(var12 != var16);
  assume(var12 != var17);
  assume(var12 != var18);
  assume(var12 != var19);
  assume(var12 != var20);
  assume(var12 != var21);
  assume(var12 != var22);
  assume(var13 != var14);
  assume(var13 != var15);
  assume(var13 != var16);
  assume(var13 != var17);
  assume(var13 != var18);
  assume(var13 != var19);
  assume(var13 != var20);
  assume(var13 != var21);
  assume(var13 != var22);
  assume(var14 != var15);
  assume(var14 != var16);
  assume(var14 != var17);
  assume(var14 != var18);
  assume(var14 != var19);
  assume(var14 != var20);
  assume(var14 != var21);
  assume(var14 != var22);
  assume(var15 != var16);
  assume(var15 != var17);
  assume(var15 != var18);
  assume(var15 != var19);
  assume(var15 != var20);
  assume(var15 != var21);
  assume(var15 != var22);
  assume(var16 != var17);
  assume(var16 != var18);
  assume(var16 != var19);
  assume(var16 != var20);
  assume(var16 != var21);
  assume(var16 != var22);
  assume(var17 != var18);
  assume(var17 != var19);
  assume(var17 != var20);
  assume(var17 != var21);
  assume(var17 != var22);
  assume(var18 != var19);
  assume(var18 != var20);
  assume(var18 != var21);
  assume(var18 != var22);
  assume(var19 != var20);
  assume(var19 != var21);
  assume(var19 != var22);
  assume(var20 != var21);
  assume(var20 != var22);
  assume(var21 != var22);
  assume(var23 != var24);
  assume(var23 != var25);
  assume(var23 != var26);
  assume(var23 != var27);
  assume(var23 != var28);
  assume(var23 != var29);
  assume(var23 != var30);
  assume(var23 != var31);
  assume(var23 != var32);
  assume(var24 != var25);
  assume(var24 != var26);
  assume(var24 != var27);
  assume(var24 != var28);
  assume(var24 != var29);
  assume(var24 != var30);
  assume(var24 != var31);
  assume(var24 != var32);
  assume(var25 != var26);
  assume(var25 != var27);
  assume(var25 != var28);
  assume(var25 != var29);
  assume(var25 != var30);
  assume(var25 != var31);
  assume(var25 != var32);
  assume(var26 != var27);
  assume(var26 != var28);
  assume(var26 != var29);
  assume(var26 != var30);
  assume(var26 != var31);
  assume(var26 != var32);
  assume(var27 != var28);
  assume(var27 != var29);
  assume(var27 != var30);
  assume(var27 != var31);
  assume(var27 != var32);
  assume(var28 != var29);
  assume(var28 != var30);
  assume(var28 != var31);
  assume(var28 != var32);
  assume(var29 != var30);
  assume(var29 != var31);
  assume(var29 != var32);
  assume(var30 != var31);
  assume(var30 != var32);
  assume(var31 != var32);
  assume(var33 != var34);
  assume(var33 != var35);
  assume(var33 != var36);
  assume(var33 != var37);
  assume(var33 != var38);
  assume(var33 != var39);
  assume(var33 != var40);
  assume(var33 != var41);
  assume(var34 != var35);
  assume(var34 != var36);
  assume(var34 != var37);
  assume(var34 != var38);
  assume(var34 != var39);
  assume(var34 != var40);
  assume(var34 != var41);
  assume(var35 != var36);
  assume(var35 != var37);
  assume(var35 != var38);
  assume(var35 != var39);
  assume(var35 != var40);
  assume(var35 != var41);
  assume(var36 != var37);
  assume(var36 != var38);
  assume(var36 != var39);
  assume(var36 != var40);
  assume(var36 != var41);
  assume(var37 != var38);
  assume(var37 != var39);
  assume(var37 != var40);
  assume(var37 != var41);
  assume(var38 != var39);
  assume(var38 != var40);
  assume(var38 != var41);
  assume(var39 != var40);
  assume(var39 != var41);
  assume(var40 != var41);
  assume(var42 != var43);
  assume(var42 != var44);
  assume(var42 != var45);
  assume(var42 != var46);
  assume(var42 != var47);
  assume(var42 != var48);
  assume(var42 != var49);
  assume(var43 != var44);
  assume(var43 != var45);
  assume(var43 != var46);
  assume(var43 != var47);
  assume(var43 != var48);
  assume(var43 != var49);
  assume(var44 != var45);
  assume(var44 != var46);
  assume(var44 != var47);
  assume(var44 != var48);
  assume(var44 != var49);
  assume(var45 != var46);
  assume(var45 != var47);
  assume(var45 != var48);
  assume(var45 != var49);
  assume(var46 != var47);
  assume(var46 != var48);
  assume(var46 != var49);
  assume(var47 != var48);
  assume(var47 != var49);
  assume(var48 != var49);
  assume(var50 != var51);
  assume(var50 != var52);
  assume(var50 != var53);
  assume(var50 != var54);
  assume(var50 != var55);
  assume(var50 != var56);
  assume(var51 != var52);
  assume(var51 != var53);
  assume(var51 != var54);
  assume(var51 != var55);
  assume(var51 != var56);
  assume(var52 != var53);
  assume(var52 != var54);
  assume(var52 != var55);
  assume(var52 != var56);
  assume(var53 != var54);
  assume(var53 != var55);
  assume(var53 != var56);
  assume(var54 != var55);
  assume(var54 != var56);
  assume(var55 != var56);
  assume(var57 != var58);
  assume(var57 != var59);
  assume(var57 != var60);
  assume(var57 != var61);
  assume(var57 != var62);
  assume(var58 != var59);
  assume(var58 != var60);
  assume(var58 != var61);
  assume(var58 != var62);
  assume(var59 != var60);
  assume(var59 != var61);
  assume(var59 != var62);
  assume(var60 != var61);
  assume(var60 != var62);
  assume(var61 != var62);
  assume(var63 != var64);
  assume(var63 != var65);
  assume(var63 != var66);
  assume(var63 != var67);
  assume(var64 != var65);
  assume(var64 != var66);
  assume(var64 != var67);
  assume(var65 != var66);
  assume(var65 != var67);
  assume(var66 != var67);
  assume(var68 != var69);
  assume(var68 != var70);
  assume(var68 != var71);
  assume(var69 != var70);
  assume(var69 != var71);
  assume(var70 != var71);
  assume(var72 != var73);
  assume(var72 != var74);
  assume(var73 != var74);
  assume(var0 - var1 == var12);
  assume(var1 - var2 == var13);
  assume(var2 - var3 == var14);
  assume(var3 - var4 == var15);
  assume(var4 - var5 == var16);
  assume(var5 - var6 == var17);
  assume(var6 - var7 == var18);
  assume(var7 - var8 == var19);
  assume(var8 - var9 == var20);
  assume(var9 - var10 == var21);
  assume(var10 - var11 == var22);
  assume(var0 - var2 == var23);
  assume(var1 - var3 == var24);
  assume(var2 - var4 == var25);
  assume(var3 - var5 == var26);
  assume(var4 - var6 == var27);
  assume(var5 - var7 == var28);
  assume(var6 - var8 == var29);
  assume(var7 - var9 == var30);
  assume(var8 - var10 == var31);
  assume(var9 - var11 == var32);
  assume(var0 - var3 == var33);
  assume(var1 - var4 == var34);
  assume(var2 - var5 == var35);
  assume(var3 - var6 == var36);
  assume(var4 - var7 == var37);
  assume(var5 - var8 == var38);
  assume(var6 - var9 == var39);
  assume(var7 - var10 == var40);
  assume(var8 - var11 == var41);
  assume(var0 - var4 == var42);
  assume(var1 - var5 == var43);
  assume(var2 - var6 == var44);
  assume(var3 - var7 == var45);
  assume(var4 - var8 == var46);
  assume(var5 - var9 == var47);
  assume(var6 - var10 == var48);
  assume(var7 - var11 == var49);
  assume(var0 - var5 == var50);
  assume(var1 - var6 == var51);
  assume(var2 - var7 == var52);
  assume(var3 - var8 == var53);
  assume(var4 - var9 == var54);
  assume(var5 - var10 == var55);
  assume(var6 - var11 == var56);
  assume(var0 - var6 == var57);
  assume(var1 - var7 == var58);
  assume(var2 - var8 == var59);
  assume(var3 - var9 == var60);
  assume(var4 - var10 == var61);
  assume(var5 - var11 == var62);
  assume(var0 - var7 == var63);
  assume(var1 - var8 == var64);
  assume(var2 - var9 == var65);
  assume(var3 - var10 == var66);
  assume(var4 - var11 == var67);
  assume(var0 - var8 == var68);
  assume(var1 - var9 == var69);
  assume(var2 - var10 == var70);
  assume(var3 - var11 == var71);
  assume(var0 - var9 == var72);
  assume(var1 - var10 == var73);
  assume(var2 - var11 == var74);
  assume((var0 - var10) != (var1 - var11));
  reach_error();
  return 0; /* 0 x[0]1 x[1]2 x[2]3 x[3]4 x[4]5 x[5]6 x[6]7 x[7]8 x[8]9 x[9]10
               x[10]11 x[11]12 y[0]13 y[1]14 y[2]15 y[3]16 y[4]17 y[5]18 y[6]19
               y[7]20 y[8]21 y[9]22 y[10]23 y[11]24 y[12]25 y[13]26 y[14]27
               y[15]28 y[16]29 y[17]30 y[18]31 y[19]32 y[20]33 y[21]34 y[22]35
               y[23]36 y[24]37 y[25]38 y[26]39 y[27]40 y[28]41 y[29]42 y[30]43
               y[31]44 y[32]45 y[33]46 y[34]47 y[35]48 y[36]49 y[37]50 y[38]51
               y[39]52 y[40]53 y[41]54 y[42]55 y[43]56 y[44]57 y[45]58 y[46]59
               y[47]60 y[48]61 y[49]62 y[50]63 y[51]64 y[52]65 y[53]66 y[54]67
               y[55]68 y[56]69 y[57]70 y[58]71 y[59]72 y[60]73 y[61]74 y[62] */
}