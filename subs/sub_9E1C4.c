int __fastcall sub_9E1C4(int result, int a2, int a3)
{
  int v3; // lr@1
  int v4; // r11@1
  int v5; // r7@1
  int v6; // r1@1
  int v7; // r5@1
  int v8; // r9@1
  int v9; // r4@1
  int v10; // r10@1
  int v11; // r6@1
  int v12; // r3@1
  int v13; // r6@1
  int v14; // ST04_4@1
  int v15; // ST14_4@1
  int v16; // r3@1
  int v17; // ST20_4@1
  int v18; // r5@1
  int v19; // ST08_4@1
  int v20; // r12@1
  int v21; // r6@1
  int v22; // r3@1
  int v23; // r6@1
  int v24; // ST10_4@1
  int v25; // ST1C_4@1
  int v26; // r8@1
  int v27; // r4@1
  int v28; // ST00_4@1
  int v29; // r6@1
  int v30; // r3@1
  int v31; // r10@1
  int v32; // ST28_4@1
  int v33; // ST2C_4@1
  int v34; // r7@1
  int v35; // r9@1
  int v36; // r6@1
  int v37; // ST24_4@1
  int v38; // r8@1
  int v39; // r5@1
  int v40; // ST18_4@1
  int v41; // r9@1
  int v42; // r12@1
  int v43; // r4@1
  int v44; // lr@1
  int v45; // r10@1
  int v46; // r6@1
  int v47; // ST0C_4@1
  int v48; // r12@1
  int v49; // r7@1
  int v50; // lr@1
  int v51; // r5@1
  int v52; // r9@1
  int v53; // r3@1
  int v54; // r9@1
  int v55; // r1@1
  int v56; // lr@1
  int v57; // r7@1
  int v58; // r5@1
  int v59; // r3@1
  int v60; // ST00_4@1
  int v61; // r1@1
  int v62; // r9@1
  int v63; // r8@1
  int v64; // lr@1
  int v65; // r12@1
  int v66; // r4@1
  int v67; // r6@1
  int v68; // r1@1
  int v69; // r4@1
  int v70; // ST04_4@1
  int v71; // r10@1
  int v72; // r5@1
  int v73; // r1@1
  int v74; // r4@1
  int v75; // r3@1
  int v76; // r1@1
  int v77; // r4@1
  int v78; // r5@1
  int v79; // r12@1
  int v80; // r3@1
  int v81; // r8@1
  int v82; // ST00_4@1
  int v83; // r6@1
  int v84; // ST08_4@1
  int v85; // r3@1
  int v86; // lr@1
  int v87; // ST14_4@1
  int v88; // r9@1
  int v89; // r7@1
  int v90; // ST0C_4@1
  int v91; // ST2C_4@1
  int v92; // r1@1
  int v93; // ST20_4@1
  int v94; // r6@1
  int v95; // r7@1
  int v96; // ST28_4@1
  int v97; // ST10_4@1
  int v98; // ST18_4@1
  int v99; // r11@1
  int v100; // r12@1
  int v101; // r8@1
  int v102; // r8@1
  int v103; // r9@1
  int v104; // r10@1
  int v105; // ST24_4@1
  int v106; // r5@1
  int v107; // r6@1
  int v108; // ST34_4@1
  int v109; // ST30_4@1
  int v110; // r5@1
  int v111; // ST08_4@1
  int v112; // ST1C_4@1
  int v113; // r8@1
  int v114; // r10@1
  int v115; // r4@1
  int v116; // ST04_4@1
  int v117; // r9@1
  int v118; // ST00_4@1
  int v119; // r4@1
  int v120; // r1@1
  int v121; // r9@1
  int v122; // r8@1
  int v123; // r12@1
  int v124; // r1@1
  int v125; // r5@1
  int v126; // r6@1
  int v127; // lr@1
  int v128; // r4@1
  int v129; // r7@1
  int v130; // r6@1
  int v131; // r8@1
  int v132; // r5@1
  int v133; // lr@1
  int v134; // r4@1
  int v135; // r9@1
  int v136; // r12@1
  int v137; // r10@1
  int v138; // r8@1
  int v139; // r1@1
  int v140; // r6@1
  int v141; // lr@1
  int v142; // r7@1
  int v143; // r5@1
  int v144; // ST0C_4@1
  int v145; // r3@1
  int v146; // r4@1
  int v147; // ST10_4@1
  int v148; // r12@1
  int v149; // r3@1
  int v150; // r7@1
  int v151; // ST08_4@1
  int v152; // r3@1
  int v153; // r7@1
  int v154; // r10@1
  int v155; // r7@1
  int v156; // r8@1
  int v157; // r3@1
  int v158; // r7@1

  v3 = *(_DWORD *)(result + 72);
  v4 = *(_DWORD *)(result + 476);
  v5 = *(_DWORD *)(result + 376);
  v6 = *(_DWORD *)(result + 388);
  v7 = (v5 & v3 ^ *(_DWORD *)(result + 24)) & *(_DWORD *)(result + 88) ^ *(_DWORD *)(result + 160);
  v8 = v6 | *(_DWORD *)(result + 156);
  v9 = *(_DWORD *)(result + 56);
  v10 = *(_DWORD *)(result + 540) ^ *(_DWORD *)(result + 316);
  v11 = (*(_DWORD *)(result + 568) ^ *(_DWORD *)(result + 256) | v3) ^ *(_DWORD *)(result + 568);
  *(_DWORD *)(result + 560) = ~(*(_DWORD *)(result + 560) ^ *(_DWORD *)(result + 644) ^ (*(_DWORD *)(result + 124) ^ v11) & v4);
  v12 = *(_DWORD *)(result + 120);
  *(_DWORD *)(result + 256) = v11;
  v13 = *(_DWORD *)(result + 280);
  *(_DWORD *)(result + 540) = v10 ^ v4 & ~v7;
  v14 = v8 & v4 ^ v6;
  v15 = v5 & v9 ^ v12;
  v16 = v6 & ~*(_DWORD *)(result + 156);
  *(_DWORD *)(result + 376) = v15;
  v17 = v13;
  v18 = v6 & v4 ^ v16;
  v19 = v16;
  v20 = v6 & v9 & ~*(_DWORD *)(result + 24);
  v21 = *(_DWORD *)(result + 432);
  *(_DWORD *)(result + 124) = v5 ^ v9;
  v22 = v21 ^ *(_DWORD *)(result + 372);
  v23 = *(_DWORD *)(result + 88);
  *(_DWORD *)(result + 280) = v14;
  v24 = v23 & ~(v9 & ~v5 ^ v22);
  v25 = v20 ^ v6;
  v26 = (v20 ^ v6) & ~v3 ^ v5 ^ v9;
  v27 = *(_DWORD *)(result + 128) ^ *(_DWORD *)(result + 452);
  v28 = v8 & ~v6;
  v29 = ~v6 & v4;
  v30 = *(_DWORD *)(result + 184);
  v31 = v29 ^ *(_DWORD *)(result + 404);
  v32 = (v8 | ~v4) & v30;
  v33 = v30 & ~(v29 ^ *(_DWORD *)(result + 452)) ^ *(_DWORD *)(result + 680) | *(_DWORD *)(result + 416);
  v34 = *(_DWORD *)(result + 344);
  v35 = *(_DWORD *)(result + 220);
  v36 = *(_DWORD *)(result + 176);
  *(_DWORD *)(result + 72) = v26;
  v37 = v35 ^ v36 ^ v26;
  v38 = v6 ^ v4;
  v39 = (v18 & v30 ^ *(_DWORD *)(result + 468) | *(_DWORD *)(result + 416)) ^ v30 & ~v31 ^ v34 ^ v28;
  v40 = v30 & ~v31 ^ v34 ^ v28;
  *(_DWORD *)(result + 344) = v34 ^ v28;
  v41 = (v20 ^ *(_DWORD *)(result + 200)) & ~v3;
  v42 = v4 & ~v28;
  v43 = v27 ^ v42;
  v44 = *(_DWORD *)(result + 156) & v4 & ~v6 ^ *(_DWORD *)(result + 452);
  v45 = v44 ^ *(_DWORD *)(result + 592);
  v46 = v44 ^ *(_DWORD *)(result + 648) | *(_DWORD *)(result + 416);
  v47 = (v42 ^ v6) & v30;
  v48 = v42 & v30 ^ *(_DWORD *)(result + 680);
  v49 = *(_DWORD *)(result + 420);
  v50 = (v19 & v4 ^ *(_DWORD *)(result + 452)) & ~v30 | *(_DWORD *)(result + 416);
  v51 = v39 & *(_DWORD *)(result + 248);
  *(_DWORD *)(result + 644) = v41 ^ v15;
  v52 = (v6 ^ v4) & v30;
  *(_DWORD *)(result + 176) = v14 ^ v52;
  v53 = v30 & ~(v6 ^ v4);
  v54 = v52 ^ *(_DWORD *)(result + 156);
  v55 = *(_DWORD *)(result + 416);
  *(_DWORD *)(result + 160) = v49 ^ v53 ^ v50;
  v56 = ~v55;
  v57 = v54 ^ v48 & ~v55;
  v58 = v51 ^ v57;
  v59 = v53 ^ v28;
  v60 = *(_DWORD *)(result + 248) & ~(v43 & ~v55 ^ *(_DWORD *)(result + 176)) ^ *(_DWORD *)(result + 160);
  v61 = v47 ^ *(_DWORD *)(result + 396);
  v62 = *(_DWORD *)(result + 580) ^ *(_DWORD *)(result + 144);
  v63 = v38 ^ *(_DWORD *)(result + 684);
  v64 = v45 & v56 ^ v63;
  v65 = v4 & ~(*(_DWORD *)(result + 644) ^ v24);
  v66 = *(_DWORD *)(result + 416);
  v67 = *(_DWORD *)(result + 248) & ~(v46 ^ v17) ^ v64;
  *(_DWORD *)(result + 580) = v57;
  v68 = v61 | v66;
  *(_DWORD *)(result + 120) = v58;
  v69 = *(_DWORD *)(result + 36);
  *(_DWORD *)(result + 648) = v67;
  *(_DWORD *)(result + 592) = v64;
  *(_DWORD *)(result + 684) = v63;
  v70 = v60 ^ v69;
  v71 = v58 ^ *(_DWORD *)(result + 44);
  v72 = *(_DWORD *)(result + 780);
  v73 = v62 ^ v32 ^ v68 ^ (v59 ^ v33) & *(_DWORD *)(result + 248);
  *(_DWORD *)(result + 220) = v37 ^ v65;
  *(_DWORD *)(result + 144) = v73;
  *(_DWORD *)(result + 396) = v25;
  v74 = *(_DWORD *)(result + 320);
  *(_DWORD *)(result + 36) = ~v70;
  v75 = *(_DWORD *)(result + 4);
  v76 = *(_DWORD *)(result + 688);
  *(_DWORD *)(result + 372) = v19;
  *(_DWORD *)(result + 320) = v74 ^ v67;
  *(_DWORD *)(result + 468) = v40;
  *(_DWORD *)(result + 128) = v60;
  v77 = *(_DWORD *)(result + 752);
  *(_DWORD *)(result + 44) = ~v71;
  v78 = v72 ^ v77 ^ v76 & v75;
  v79 = v78 & ~*(_DWORD *)(result + 136);
  v80 = *(_DWORD *)(result + 384);
  v81 = *(_DWORD *)(result + 512) ^ *(_DWORD *)(result + 100) ^ v78 & ~*(_DWORD *)(result + 392);
  v82 = *(_DWORD *)(result + 336);
  v83 = *(_DWORD *)(result + 596) ^ *(_DWORD *)(result + 776);
  v84 = v80;
  v85 = v78 & ~v80;
  v86 = *(_DWORD *)(result + 232);
  v87 = v85 ^ v82;
  v88 = v82 ^ v86 ^ v78 ^ v84;
  v89 = (v78 ^ *(_DWORD *)(result + 308)) & v86;
  v90 = ~v86;
  v91 = v78 ^ v84;
  v92 = *(_DWORD *)(result + 440);
  *(_DWORD *)(result + 168) ^= *(_DWORD *)(result + 224) ^ v78 & *(_DWORD *)(result + 492);
  *(_DWORD *)(result + 100) = ~v81;
  *(_DWORD *)(result + 596) = ~(v83 ^ v79);
  v93 = v89 ^ v92;
  v94 = (v85 ^ v82) & ~v86;
  *(_DWORD *)(result + 308) = v89 ^ v92;
  v95 = v78;
  v96 = (v82 | v78) ^ v78 ^ v94;
  *(_DWORD *)(result + 432) = v96;
  v97 = v78 & ~v85;
  v98 = v88 ^ *(_DWORD *)(result + 196);
  *(_DWORD *)(result + 688) = v85 ^ v82;
  *(_DWORD *)(result + 4) = v97;
  v99 = ~v78 & v84;
  v100 = v78 | v84;
  v101 = *(_DWORD *)(result + 304);
  *(_DWORD *)(result + 416) = ~v78;
  *(_DWORD *)(result + 304) = v88;
  v102 = v94 ^ v101;
  v103 = v78 & ~v82;
  v104 = (v85 ^ (v82 | v78)) & ~v86;
  v105 = (v85 ^ v82) & ~v86;
  v106 = *(_DWORD *)(result + 424);
  v107 = v84;
  *(_DWORD *)(result + 196) = v98;
  v108 = v102;
  v109 = v104 ^ *(_DWORD *)(result + 440);
  *(_DWORD *)(result + 424) = v106 ^ v91;
  v110 = *(_DWORD *)(result + 424);
  *(_DWORD *)(result + 776) = v95 | v84;
  *(_DWORD *)(result + 136) = v99 ^ v103;
  v111 = (v103 ^ v84 | v86) ^ v110;
  v112 = ((v99 | v82) ^ v99) & ~v86 ^ v100;
  v113 = v107 & v95 & ~v82;
  v114 = v104 ^ v113;
  v115 = v82;
  v116 = v95;
  v117 = v107 & v95 ^ v82;
  v118 = v100 & ~v82;
  v119 = v115 | v97;
  v120 = v117 | v86;
  v121 = v113 ^ v95 ^ v105;
  v122 = v119 ^ v85;
  v123 = v118 ^ (v100 | v86);
  v124 = v120 ^ v119;
  v125 = (v91 | v86) ^ v91 ^ v119 | *(_DWORD *)(result + 700);
  v126 = *(_DWORD *)(result + 136);
  *(_DWORD *)(result + 392) = v123;
  *(_DWORD *)(result + 780) = (v97 ^ v118 | v86) ^ v126;
  v127 = (v119 ^ v99 | v86) ^ v87;
  v128 = *(_DWORD *)(result + 700);
  v129 = v122 & v90;
  v130 = *(_DWORD *)(result + 700);
  *(_DWORD *)(result + 476) = v127;
  v131 = ~v128;
  v132 = v125 ^ v123;
  v133 = v111 & ~v128;
  v134 = v121 ^ v114 & ~v128;
  v135 = v99 ^ *(_DWORD *)(result + 796);
  v136 = v112 & v131;
  v137 = *(_DWORD *)(result + 412);
  v138 = v137 & ~(v109 ^ v108 & v131);
  v139 = (v124 | v130) ^ *(_DWORD *)(result + 780);
  v140 = v137 & ~v132 ^ v98;
  v141 = *(_DWORD *)(result + 412) & ~(v133 ^ v96) ^ v139;
  v142 = v129 ^ v135 | *(_DWORD *)(result + 700);
  v143 = *(_DWORD *)(result + 476) ^ v136;
  v144 = v141 ^ *(_DWORD *)(result + 28);
  v145 = *(_DWORD *)(result + 228);
  v146 = *(_DWORD *)(result + 412) & ~v134 ^ v143;
  *(_DWORD *)(result + 384) = v99;
  v147 = v146 ^ v145;
  v148 = v140 ^ *(_DWORD *)(result + 84);
  *(_DWORD *)(result + 512) = v141;
  v149 = v93 ^ v142;
  v150 = *(_DWORD *)(result + 8);
  v151 = v149;
  *(_DWORD *)(result + 752) = v139;
  v152 = v116 & v150;
  v153 = *(_DWORD *)(result + 692);
  *(_DWORD *)(result + 316) = v146;
  v154 = v153;
  v155 = *(_DWORD *)(result + 244);
  *(_DWORD *)(result + 336) = v112;
  *(_DWORD *)(result + 692) = v154 ^ v155 ^ v152;
  v156 = v151 ^ v138;
  *(_DWORD *)(result + 492) = v140;
  *(_DWORD *)(result + 228) = ~v147;
  v157 = *(_DWORD *)(result + 312);
  *(_DWORD *)(result + 8) = v118;
  v158 = *(_DWORD *)(result + 460);
  *(_DWORD *)(result + 28) = ~v144;
  *(_DWORD *)(result + 700) = v143;
  *(_DWORD *)(result + 84) = ~v148;
  *(_DWORD *)(result + 440) = v156;
  *(_DWORD *)(result + 248) = v151;
  *(_DWORD *)(result + 796) = v135;
  *(_DWORD *)(result + 460) = v158 ^ v156;
  *(_DWORD *)a3 = v157;
  *(_DWORD *)(a3 + 4) = *(_DWORD *)(result + 732);
  *(_DWORD *)(a3 + 8) = *(_DWORD *)(result + 12);
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(result + 704);
  *(_DWORD *)(a3 + 16) = *(_DWORD *)(result + 788);
  *(_DWORD *)(a3 + 20) = *(_DWORD *)(result + 736);
  *(_DWORD *)(a3 + 24) = *(_DWORD *)(result + 28);
  *(_DWORD *)(a3 + 28) = *(_DWORD *)(result + 24);
  *(_DWORD *)(a3 + 32) = *(_DWORD *)(result + 36);
  *(_DWORD *)(a3 + 36) = *(_DWORD *)(result + 32);
  *(_DWORD *)(a3 + 40) = *(_DWORD *)(result + 44);
  *(_DWORD *)(a3 + 44) = *(_DWORD *)(result + 264);
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(result + 52);
  *(_DWORD *)(a3 + 52) = *(_DWORD *)(result + 48);
  *(_DWORD *)(a3 + 56) = *(_DWORD *)(result + 712);
  *(_DWORD *)(a3 + 60) = *(_DWORD *)(result + 56);
  *(_DWORD *)(a3 + 64) = *(_DWORD *)(result + 68);
  *(_DWORD *)(a3 + 68) = *(_DWORD *)(result + 536);
  *(_DWORD *)(a3 + 72) = *(_DWORD *)(result + 348);
  *(_DWORD *)(a3 + 76) = *(_DWORD *)(result + 20);
  *(_DWORD *)(a3 + 80) = *(_DWORD *)(result + 84);
  *(_DWORD *)(a3 + 84) = *(_DWORD *)(result + 80);
  *(_DWORD *)(a3 + 88) = *(_DWORD *)(result + 92);
  *(_DWORD *)(a3 + 92) = *(_DWORD *)(result + 88);
  *(_DWORD *)(a3 + 96) = *(_DWORD *)(result + 100);
  *(_DWORD *)(a3 + 100) = *(_DWORD *)(result + 76);
  *(_DWORD *)(a3 + 104) = *(_DWORD *)(result + 448);
  *(_DWORD *)(a3 + 108) = *(_DWORD *)(result + 416);
  *(_DWORD *)(a3 + 112) = *(_DWORD *)(result + 540);
  *(_DWORD *)(a3 + 116) = *(_DWORD *)(result + 112);
  *(_DWORD *)(a3 + 120) = *(_DWORD *)(result + 616);
  *(_DWORD *)(a3 + 124) = *(_DWORD *)(result + 388);
  *(_DWORD *)(a3 + 128) = *(_DWORD *)(result + 132);
  *(_DWORD *)(a3 + 132) = *(_DWORD *)(result + 480);
  *(_DWORD *)(a3 + 136) = *(_DWORD *)(result + 216);
  *(_DWORD *)(a3 + 140) = *(_DWORD *)(result + 556);
  *(_DWORD *)(a3 + 144) = *(_DWORD *)(result + 148);
  *(_DWORD *)(a3 + 148) = *(_DWORD *)(result + 768);
  *(_DWORD *)(a3 + 152) = *(_DWORD *)(result + 168);
  *(_DWORD *)(a3 + 156) = *(_DWORD *)(result + 520);
  *(_DWORD *)(a3 + 160) = *(_DWORD *)(result + 164);
  *(_DWORD *)(a3 + 164) = *(_DWORD *)(result + 544);
  *(_DWORD *)(a3 + 168) = *(_DWORD *)(result + 596);
  *(_DWORD *)(a3 + 172) = *(_DWORD *)(result + 412);
  *(_DWORD *)(a3 + 176) = *(_DWORD *)(result + 692);
  *(_DWORD *)(a3 + 180) = *(_DWORD *)(result + 764);
  *(_DWORD *)(a3 + 184) = *(_DWORD *)(result + 460);
  *(_DWORD *)(a3 + 188) = *(_DWORD *)(result + 184);
  *(_DWORD *)(a3 + 192) = *(_DWORD *)(result + 784);
  *(_DWORD *)(a3 + 196) = *(_DWORD *)(result + 284);
  *(_DWORD *)(a3 + 200) = *(_DWORD *)(result + 560);
  *(_DWORD *)(a3 + 204) = *(_DWORD *)(result + 272);
  *(_DWORD *)(a3 + 208) = *(_DWORD *)(result + 212);
  *(_DWORD *)(a3 + 212) = *(_DWORD *)(result + 488);
  *(_DWORD *)(a3 + 216) = *(_DWORD *)(result + 220);
  *(_DWORD *)(a3 + 220) = *(_DWORD *)(result + 436);
  *(_DWORD *)(a3 + 224) = *(_DWORD *)(result + 228);
  *(_DWORD *)(a3 + 228) = *(_DWORD *)(result + 444);
  *(_DWORD *)(a3 + 232) = *(_DWORD *)(result + 144);
  *(_DWORD *)(a3 + 236) = *(_DWORD *)(result + 576);
  *(_DWORD *)(a3 + 240) = *(_DWORD *)(result + 320);
  *(_DWORD *)(a3 + 244) = *(_DWORD *)(result + 484);
  *(_DWORD *)(a3 + 248) = *(_DWORD *)(result + 252);
  *(_DWORD *)(a3 + 252) = *(_DWORD *)(result + 188);
  return result;
}
