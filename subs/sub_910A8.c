int __fastcall sub_910A8(int result)
{
  int v1; // r1@1
  int v2; // ST08_4@1
  int v3; // r10@1
  int v4; // r5@1
  int v5; // ST04_4@1
  int v6; // r4@1
  int v7; // r8@1
  int v8; // ST3C_4@1
  int v9; // ST38_4@1
  int v10; // ST18_4@1
  int v11; // ST0C_4@1
  int v12; // ST14_4@1
  int v13; // ST34_4@1
  int v14; // ST44_4@1
  int v15; // ST40_4@1
  int v16; // ST24_4@1
  int v17; // ST48_4@1
  int v18; // ST10_4@1
  int v19; // ST04_4@1
  int v20; // r5@1
  int v21; // r2@1
  int v22; // r4@1
  int v23; // r5@1
  int v24; // r6@1
  int v25; // lr@1
  int v26; // r7@1
  int v27; // ST18_4@1
  int v28; // ST14_4@1
  int v29; // r1@1
  int v30; // r12@1
  int v31; // ST0C_4@1
  int v32; // ST04_4@1
  int v33; // ST20_4@1
  int v34; // r1@1
  int v35; // r9@1
  int v36; // ST4C_4@1
  int v37; // ST28_4@1
  int v38; // r3@1
  int v39; // ST2C_4@1
  int v40; // ST18_4@1
  int v41; // r3@1
  int v42; // r6@1
  int v43; // lr@1
  int v44; // ST30_4@1
  int v45; // ST40_4@1
  int v46; // STD8_4@1
  int v47; // ST14_4@1
  int v48; // r7@1
  int v49; // r12@1
  int v50; // r8@1
  int v51; // ST10_4@1
  int v52; // lr@1
  int v53; // ST1C_4@1
  int v54; // r6@1
  int v55; // r9@1
  int v56; // r4@1
  int v57; // r1@1
  int v58; // ST28_4@1
  int v59; // ST38_4@1
  int v60; // ST5C_4@1
  int v61; // ST68_4@1
  int v62; // r6@1
  int v63; // r5@1
  int v64; // ST10_4@1
  int v65; // r2@1
  int v66; // ST4C_4@1
  int v67; // ST64_4@1
  int v68; // ST60_4@1
  int v69; // ST3C_4@1
  int v70; // lr@1
  int v71; // ST5C_4@1
  int v72; // ST54_4@1
  int v73; // ST68_4@1
  int v74; // ST40_4@1
  int v75; // ST2C_4@1
  int v76; // r8@1
  int v77; // r2@1
  int v78; // r3@1
  int v79; // r1@1
  int v80; // ST58_4@1
  int v81; // r9@1
  int v82; // ST04_4@1
  int v83; // r3@1
  int v84; // r11@1
  int v85; // ST10_4@1
  int v86; // ST20_4@1
  int v87; // r1@1
  int v88; // r3@1
  int v89; // r8@1
  int v90; // ST04_4@1
  int v91; // r2@1
  int v92; // r4@1
  int v93; // r6@1
  int v94; // r1@1
  int v95; // r12@1
  int v96; // r7@1
  int v97; // r6@1
  int v98; // lr@1
  int v99; // ST50_4@1
  int v100; // r1@1
  int v101; // ST08_4@1
  int v102; // r6@1
  int v103; // ST90_4@1
  int v104; // r3@1
  int v105; // r4@1
  int v106; // r12@1
  int v107; // r4@1
  int v108; // r12@1
  int v109; // r3@1
  int v110; // ST5C_4@1
  int v111; // r6@1
  int v112; // ST0C_4@1
  int v113; // ST38_4@1
  int v114; // ST80_4@1
  int v115; // r1@1
  int v116; // STCC_4@1
  int v117; // r7@1
  int v118; // r5@1
  int v119; // ST84_4@1
  int v120; // ST04_4@1
  int v121; // r3@1
  int v122; // ST4C_4@1
  int v123; // ST74_4@1
  int v124; // ST3C_4@1
  int v125; // r2@1
  int v126; // ST60_4@1
  int v127; // ST40_4@1
  int v128; // r1@1
  int v129; // ST48_4@1
  int v130; // ST64_4@1
  int v131; // ST20_4@1
  int v132; // r7@1
  int v133; // ST70_4@1
  int v134; // STE0_4@1
  int v135; // ST34_4@1
  int v136; // r6@1
  int v137; // ST2C_4@1
  int v138; // r1@1
  int v139; // lr@1
  int v140; // r8@1
  int v141; // r4@1
  int v142; // r3@1
  int v143; // r2@1
  int v144; // ST10_4@1
  int v145; // r5@1
  int v146; // STB0_4@1
  int v147; // r10@1
  int v148; // r5@1
  int v149; // STAC_4@1
  int v150; // r1@1
  int v151; // r3@1
  int v152; // r5@1
  int v153; // r4@1
  int v154; // lr@1
  int v155; // r3@1
  int v156; // r9@1
  int v157; // ST28_4@1
  int v158; // ST58_4@1
  int v159; // r3@1
  int v160; // r12@1
  int v161; // lr@1
  int v162; // ST6C_4@1
  int v163; // r2@1
  int v164; // r4@1
  int v165; // r1@1
  int v166; // lr@1
  int v167; // r6@1
  int v168; // ST68_4@1
  int v169; // r7@1
  int v170; // ST88_4@1
  int v171; // r1@1
  int v172; // r4@1
  int v173; // ST34_4@1
  int v174; // r6@1
  int v175; // ST20_4@1
  int v176; // r5@1
  int v177; // r2@1
  int v178; // r1@1
  int v179; // r12@1
  int v180; // r11@1
  int v181; // r3@1
  int v182; // r12@1
  int v183; // r9@1
  int v184; // ST78_4@1
  int v185; // r3@1
  int v186; // ST74_4@1
  int v187; // lr@1
  int v188; // ST34_4@1
  int v189; // r5@1
  int v190; // ST7C_4@1
  int v191; // r10@1
  int v192; // lr@1
  int v193; // ST88_4@1
  int v194; // ST84_4@1
  int v195; // r1@1
  int v196; // r3@1
  int v197; // ST48_4@1
  int v198; // r5@1
  int v199; // ST8C_4@1
  int v200; // r8@1
  int v201; // r6@1
  int v202; // ST68_4@1
  int v203; // lr@1
  int v204; // ST6C_4@1
  int v205; // r4@1
  int v206; // r12@1
  int v207; // r6@1
  int v208; // r1@1
  int v209; // r7@1
  int v210; // r5@1
  int v211; // lr@1
  int v212; // r9@1
  int v213; // r2@1
  int v214; // ST88_4@1
  int v215; // ST78_4@1
  int v216; // ST58_4@1
  int v217; // STBC_4@1
  int v218; // ST74_4@1
  int v219; // r5@1
  int v220; // r9@1
  int v221; // ST7C_4@1
  int v222; // r3@1
  int v223; // r5@1
  int v224; // ST60_4@1
  int v225; // r7@1
  int v226; // STA4_4@1
  int v227; // ST8C_4@1
  int v228; // ST9C_4@1
  int v229; // r3@1
  int v230; // ST34_4@1
  int v231; // STC0_4@1
  int v232; // ST64_4@1
  int v233; // r4@1
  int v234; // r1@1
  int v235; // r12@1
  int v236; // r2@1
  int v237; // ST6C_4@1
  int v238; // ST1C_4@1
  int v239; // ST48_4@1
  int v240; // r10@1
  int v241; // ST20_4@1
  int v242; // r12@1
  int v243; // ST78_4@1
  int v244; // ST88_4@1
  int v245; // r1@1
  int v246; // lr@1
  int v247; // STA8_4@1
  int v248; // r12@1
  int v249; // r1@1
  int v250; // STB8_4@1
  int v251; // STB4_4@1
  int v252; // r8@1
  int v253; // r1@1
  int v254; // r10@1
  int v255; // r5@1
  int v256; // r4@1
  int v257; // r9@1
  int v258; // r3@1
  int v259; // lr@1
  int v260; // ST48_4@1
  int v261; // r12@1
  int v262; // ST20_4@1
  int v263; // ST60_4@1
  int v264; // ST6C_4@1
  int v265; // r6@1
  int v266; // ST1C_4@1
  int v267; // ST10_4@1
  int v268; // ST40_4@1
  int v269; // ST64_4@1
  int v270; // ST74_4@1
  int v271; // ST78_4@1
  int v272; // ST7C_4@1
  int v273; // r3@1
  int v274; // r2@1
  int v275; // ST88_4@1
  int v276; // r1@1
  int v277; // ST84_4@1
  int v278; // r9@1
  int v279; // ST34_4@1
  int v280; // r4@1
  int v281; // r5@1
  int v282; // r10@1
  int v283; // ST3C_4@1
  int v284; // ST9C_4@1
  int v285; // STA0_4@1
  int v286; // ST1C_4@1
  int v287; // STB8_4@1
  int v288; // STB4_4@1
  int v289; // r1@1
  int v290; // ST64_4@1
  int v291; // r3@1
  int v292; // ST78_4@1
  int v293; // ST34_4@1
  int v294; // r3@1
  int v295; // r4@1
  int v296; // ST20_4@1
  int v297; // ST8C_4@1
  int v298; // STC4_4@1
  int v299; // r7@1
  int v300; // ST40_4@1
  int v301; // STA4_4@1
  int v302; // ST74_4@1
  int v303; // STDC_4@1
  int v304; // r1@1
  int v305; // ST98_4@1
  int v306; // r6@1
  int v307; // r3@1
  int v308; // ST58_4@1
  int v309; // r5@1
  int v310; // ST60_4@1
  int v311; // ST7C_4@1
  int v312; // ST18_4@1
  int v313; // r5@1
  int v314; // r3@1
  int v315; // ST88_4@1
  int v316; // ST10_4@1
  int v317; // r12@1
  int v318; // r9@1
  int v319; // ST44_4@1
  int v320; // STC8_4@1
  int v321; // ST48_4@1
  int v322; // ST94_4@1
  int v323; // r4@1
  int v324; // r5@1
  int v325; // STA4_4@1
  int v326; // STE4_4@1
  int v327; // r6@1
  int v328; // r1@1
  int v329; // r12@1
  int v330; // r8@1
  int v331; // STBC_4@1
  int v332; // lr@1
  int v333; // ST04_4@1
  int v334; // STCC_4@1
  int v335; // r11@1
  int v336; // r9@1
  int v337; // ST10_4@1
  int v338; // STD4_4@1
  int v339; // lr@1
  int v340; // r4@1
  int v341; // ST80_4@1
  int v342; // STE4_4@1
  int v343; // STEC_4@1
  int v344; // STF4_4@1
  int v345; // r8@1
  int v346; // STFC_4@1
  int v347; // r4@1
  int v348; // r12@1
  int v349; // STF0_4@1
  int v350; // ST2C_4@1
  int v351; // ST104_4@1
  int v352; // r7@1
  int v353; // ST04_4@1
  int v354; // ST5C_4@1
  int v355; // r8@1
  int v356; // r1@1
  int v357; // r11@1
  int v358; // r12@1
  int v359; // STA4_4@1
  int v360; // r4@1
  int v361; // STCC_4@1
  int v362; // r9@1
  int v363; // r7@1
  int v364; // ST24_4@1
  int v365; // STC4_4@1
  int v366; // STDC_4@1
  int v367; // STA8_4@1
  int v368; // r4@1
  int v369; // r10@1
  int v370; // r2@1
  int v371; // STBC_4@1
  int v372; // r8@1
  int v373; // ST78_4@1
  int v374; // r3@1
  int v375; // ST88_4@1
  int v376; // r6@1
  int v377; // ST64_4@1
  int v378; // r7@1
  int v379; // r9@1
  int v380; // ST1C_4@1
  int v381; // r3@1
  int v382; // r3@1
  int v383; // r5@1
  int v384; // r4@1
  int v385; // r2@1
  int v386; // r6@1
  int v387; // ST08_4@1
  int v388; // r7@1
  int v389; // r1@1
  int v390; // r11@1
  int v391; // ST54_4@1
  int v392; // ST58_4@1
  int v393; // r5@1
  int v394; // r12@1
  int v395; // r1@1
  int v396; // r4@1
  int v397; // r7@1
  int v398; // r1@1
  int v399; // r6@1
  int v400; // r1@1

  v1 = *(_DWORD *)(result + 264);
  v2 = *(_DWORD *)(result + 20) ^ *(_DWORD *)(result + 360);
  v3 = *(_DWORD *)(result + 28) ^ *(_DWORD *)(result + 792) ^ *(_DWORD *)(result + 568) & *(_DWORD *)(result + 640) ^ (*(_DWORD *)(result + 436) & *(_DWORD *)(result + 640) ^ *(_DWORD *)(result + 420) | *(_DWORD *)(result + 424));
  v4 = *(_DWORD *)(result + 616);
  v5 = *(_DWORD *)(result + 84);
  v6 = *(_DWORD *)(result + 808);
  v7 = ~*(_DWORD *)(result + 52);
  *(_DWORD *)(result + 28) = v3;
  v8 = (v5 | v4) & ~v4;
  v9 = (v5 | v4) & v7;
  v10 = *(_DWORD *)(result + 196) ^ *(_DWORD *)(result + 788) & ~((v5 | *(_DWORD *)(result + 52)) ^ v6);
  v11 = *(_DWORD *)(result + 52) ^ *(_DWORD *)(result + 372) ^ (v5 | v4);
  v12 = v9 ^ *(_DWORD *)(result + 556) ^ *(_DWORD *)(result + 788) & ~(v1 ^ v8);
  v13 = ~v3 & *(_DWORD *)(result + 408);
  v14 = v2 ^ *(_DWORD *)(result + 192);
  v15 = v4 & ~v6;
  v16 = *(_DWORD *)(result + 400) & v14 ^ *(_DWORD *)(result + 600) ^ *(_DWORD *)(result + 148);
  v17 = v7 & v5 ^ (v5 | v4);
  v18 = v3 | *(_DWORD *)(result + 612);
  v19 = (v16 | *(_DWORD *)(result + 636)) ^ *(_DWORD *)(result + 348);
  v20 = v16 & ~(v7 & v6 ^ *(_DWORD *)(result + 476));
  v21 = v3 & ~(~v16 & *(_DWORD *)(result + 320) ^ *(_DWORD *)(result + 316) ^ (~v16 & *(_DWORD *)(result + 244) ^ *(_DWORD *)(result + 460)) & *(_DWORD *)(result + 212));
  v22 = v10 & v16 ^ v12;
  v23 = v20 ^ v11;
  v24 = (*(_DWORD *)(result + 212) & ~v19 ^ v19) & v3;
  v25 = v16 & ~*(_DWORD *)(result + 540) ^ *(_DWORD *)(result + 376) ^ *(_DWORD *)(result + 212) & ~(~v16 & *(_DWORD *)(result + 316) ^ *(_DWORD *)(result + 656)) ^ v3 & ~(*(_DWORD *)(result + 212) & ~((v16 | *(_DWORD *)(result + 552)) ^ *(_DWORD *)(result + 608)) ^ (*(_DWORD *)(result + 388) | v16) ^ *(_DWORD *)(result + 544));
  v26 = *(_DWORD *)(result + 628) ^ *(_DWORD *)(result + 88) ^ (v16 | *(_DWORD *)(result + 692)) ^ v16 & *(_DWORD *)(result + 212);
  v27 = *(_DWORD *)(result + 452) ^ *(_DWORD *)(result + 416) ^ ~v16 & *(_DWORD *)(result + 328) ^ *(_DWORD *)(result + 212) & ((v16 | *(_DWORD *)(result + 548)) ^ *(_DWORD *)(result + 648));
  v28 = *(_DWORD *)(result + 236) & ~v22;
  v29 = ~v3 & *(_DWORD *)(result + 408);
  v30 = v23 ^ *(_DWORD *)(result + 640) ^ v22 & ~*(_DWORD *)(result + 236);
  *(_DWORD *)(result + 640) = v30;
  v31 = v29 ^ *(_DWORD *)(result + 800);
  v32 = ~*(_DWORD *)(result + 244);
  v33 = v18 ^ *(_DWORD *)(result + 604);
  v34 = v32 & *(_DWORD *)(result + 800);
  v35 = ~v3 & *(_DWORD *)(result + 700);
  v36 = ~v3 & *(_DWORD *)(result + 560);
  v37 = v3 | *(_DWORD *)(result + 700);
  v38 = v27;
  v39 = v3 | *(_DWORD *)(result + 408);
  v40 = v30;
  v41 = v38 ^ v24;
  v42 = *(_DWORD *)(result + 52);
  v43 = v25 ^ *(_DWORD *)(result + 64);
  v44 = v23 ^ v14 ^ v28;
  *(_DWORD *)(result + 796) = v44;
  v45 = v15 ^ v42;
  v46 = v26 ^ v21;
  *(_DWORD *)(result + 88) = v26 ^ v21;
  v47 = v43;
  *(_DWORD *)(result + 64) = v43;
  v48 = v18 ^ *(_DWORD *)(result + 104);
  v49 = v33 ^ *(_DWORD *)(result + 324);
  v50 = v17 & *(_DWORD *)(result + 788);
  v51 = v34 & ~v3;
  v52 = v35 ^ *(_DWORD *)(result + 604);
  v53 = v41;
  v54 = v35 ^ *(_DWORD *)(result + 124);
  v55 = v36 ^ *(_DWORD *)(result + 700);
  *(_DWORD *)(result + 452) = v41;
  v56 = v37 ^ *(_DWORD *)(result + 408);
  v57 = ~v3 & *(_DWORD *)(result + 728);
  v58 = ~v3 & *(_DWORD *)(result + 612);
  v59 = v9 ^ v8;
  v60 = v52 ^ v51;
  v61 = v54 | *(_DWORD *)(result + 244);
  v62 = *(_DWORD *)(result + 244);
  v63 = (*(_DWORD *)(result + 104) ^ v39) & v62;
  v64 = ~*(_DWORD *)(result + 92);
  v65 = *(_DWORD *)(result + 700) ^ v58;
  v66 = v16 & (v45 ^ v50);
  v67 = v60 ^ (v49 | *(_DWORD *)(result + 92));
  v68 = (v31 & v32 ^ v48) & v64;
  v69 = v64 & v62 & v3;
  v70 = v61 ^ v39;
  v71 = v56 ^ *(_DWORD *)(result + 216) ^ v55 & v32;
  v72 = *(_DWORD *)(result + 60) ^ *(_DWORD *)(result + 200) ^ v14 & ~*(_DWORD *)(result + 356);
  v73 = (v57 ^ *(_DWORD *)(result + 800)) & v32;
  v74 = (v57 ^ *(_DWORD *)(result + 728)) & v32;
  v75 = v57 ^ *(_DWORD *)(result + 560);
  v76 = v65 ^ *(_DWORD *)(result + 424);
  v77 = v65 & v32;
  v78 = v32 & ((v3 | *(_DWORD *)(result + 560)) ^ *(_DWORD *)(result + 700));
  v79 = *(_DWORD *)(result + 736);
  v80 = v16 | v79;
  v81 = v16 & v79;
  v82 = v59 ^ *(_DWORD *)(result + 268) ^ v66;
  v83 = v78 ^ v33;
  v84 = (*(_DWORD *)(result + 244) & ~(v13 ^ *(_DWORD *)(result + 408)) ^ v31) & v64 ^ *(_DWORD *)(result + 244) ^ *(_DWORD *)(result + 560) ^ v3;
  v85 = v67 & v72 ^ v71 ^ v68;
  v86 = *(_DWORD *)(result + 236) & v82;
  v87 = (v75 | *(_DWORD *)(result + 244)) ^ *(_DWORD *)(result + 124) ^ (v3 | *(_DWORD *)(result + 604)) ^ (v77 ^ v58 ^ *(_DWORD *)(result + 612) | *(_DWORD *)(result + 92));
  v88 = v76 ^ v73 ^ (v70 | *(_DWORD *)(result + 92)) ^ v72 & ~v83;
  v89 = v72 & ~(v63 ^ v31 ^ v69) ^ *(_DWORD *)(result + 128) ^ v84;
  v90 = v82 | *(_DWORD *)(result + 236);
  v91 = v67 & v72 ^ v71 ^ v68;
  v92 = *(_DWORD *)(result + 248) ^ *(_DWORD *)(result + 688) ^ v16 & *(_DWORD *)(result + 468) ^ v86;
  v93 = *(_DWORD *)(result + 688) ^ v16 & *(_DWORD *)(result + 468);
  v94 = (v74 ^ (v3 | *(_DWORD *)(result + 124))) & v72 ^ *(_DWORD *)(result + 112) ^ v87;
  v95 = v80 ^ *(_DWORD *)(result + 280) ^ *(_DWORD *)(result + 212) & ~(~v16 & *(_DWORD *)(result + 636) ^ *(_DWORD *)(result + 724)) ^ *(_DWORD *)(result + 8) ^ v3 & ~(v81 ^ *(_DWORD *)(result + 376) ^ (*(_DWORD *)(result + 552) & ~v16 ^ *(_DWORD *)(result + 376)) & *(_DWORD *)(result + 212));
  *(_DWORD *)(result + 112) = v94;
  v96 = v94;
  v97 = v93 ^ *(_DWORD *)(result + 208);
  *(_DWORD *)(result + 216) = v91;
  *(_DWORD *)(result + 248) = v92;
  v98 = ~v91;
  v99 = v92;
  *(_DWORD *)(result + 324) = ~v91 & v92;
  *(_DWORD *)(result + 424) = v88;
  v100 = v40 & ~v88;
  v101 = v95;
  v102 = v97 ^ v90;
  v103 = v88 & v40;
  v104 = v14 & ~*(_DWORD *)(result + 584);
  v105 = *(_DWORD *)(result + 4);
  *(_DWORD *)(result + 8) = v95;
  *(_DWORD *)(result + 556) = v100;
  v106 = v105;
  v107 = *(_DWORD *)(result + 524);
  *(_DWORD *)(result + 196) = v100;
  *(_DWORD *)(result + 800) = v100;
  v108 = v106 ^ v107 ^ v104;
  *(_DWORD *)(result + 208) = v102;
  v109 = v102;
  v110 = ~v102;
  v111 = *(_DWORD *)(result + 788);
  *(_DWORD *)(result + 128) = v89;
  *(_DWORD *)(result + 328) = v103;
  v112 = v89;
  v113 = v109;
  v114 = ~v89;
  v115 = v96;
  v116 = v109 ^ v111;
  v117 = *(_DWORD *)(result + 144);
  v118 = *(_DWORD *)(result + 220);
  v119 = v115 & v117;
  v120 = v115;
  v121 = *(_DWORD *)(result + 256);
  v122 = ~v117;
  v123 = v115 & ~v117;
  v124 = v108 & *(_DWORD *)(result + 740);
  v125 = *(_DWORD *)(result + 720) ^ *(_DWORD *)(result + 120);
  v126 = v108 & *(_DWORD *)(result + 252);
  v127 = v108 & ~*(_DWORD *)(result + 472);
  v128 = *(_DWORD *)(result + 24);
  v129 = v108 & v118;
  v130 = v108 & v118 ^ v118;
  v131 = (v125 ^ (v121 | v108)) & ~v128;
  v132 = v125 ^ (v121 | v108);
  v133 = v125 ^ (v121 | v108);
  v134 = ~v132;
  v135 = ~v132 & v128;
  v136 = v108 & ~*(_DWORD *)(result + 712);
  v137 = v108;
  v138 = v98 & v132;
  v139 = v85 | v132;
  v140 = *(_DWORD *)(result + 160) ^ *(_DWORD *)(result + 136) ^ (v108 | *(_DWORD *)(result + 680));
  v141 = *(_DWORD *)(result + 24) & ~v135;
  v142 = *(_DWORD *)(result + 56) & ~v131;
  v143 = *(_DWORD *)(result + 24);
  v144 = *(_DWORD *)(result + 744) ^ *(_DWORD *)(result + 592) ^ (v108 | *(_DWORD *)(result + 672));
  v145 = *(_DWORD *)(result + 804);
  *(_DWORD *)(result + 372) = v132 | v143;
  v146 = v132 ^ v143;
  v147 = v108 & ~v145;
  v148 = *(_DWORD *)(result + 220);
  *(_DWORD *)(result + 136) = v142;
  *(_DWORD *)(result + 256) = v138;
  *(_DWORD *)(result + 320) = v138;
  v149 = v138;
  *(_DWORD *)(result + 376) = v138;
  v150 = *(_DWORD *)(result + 612);
  *(_DWORD *)(result + 540) = v141;
  *(_DWORD *)(result + 460) = v135;
  v151 = *(_DWORD *)(result + 804);
  v152 = v147 ^ v148 ^ v150 & ~(v148 ^ v136);
  v153 = *(_DWORD *)(result + 712);
  *(_DWORD *)(result + 672) = v139;
  v154 = v136 ^ v151;
  v155 = *(_DWORD *)(result + 220);
  *(_DWORD *)(result + 592) = v131;
  v156 = v108 & ~v155;
  v157 = v140;
  v158 = v154;
  v159 = *(_DWORD *)(result + 612) & ~(v153 ^ v129) ^ v130;
  *(_DWORD *)(result + 724) = v132 & v143;
  *(_DWORD *)(result + 608) = v132 ^ v143;
  *(_DWORD *)(result + 160) = v140;
  v160 = v154 & *(_DWORD *)(result + 612);
  v161 = v136 ^ *(_DWORD *)(result + 252);
  *(_DWORD *)(result + 744) = v144;
  v162 = v161;
  *(_DWORD *)(result + 120) = v133;
  v163 = *(_DWORD *)(result + 612) & ~v161;
  v164 = *(_DWORD *)(result + 496);
  v165 = *(_DWORD *)(result + 712) & *(_DWORD *)(result + 612);
  *(_DWORD *)(result + 496) = *(_DWORD *)(result + 372);
  v166 = v147 ^ *(_DWORD *)(result + 804);
  v167 = *(_DWORD *)(result + 532);
  v168 = v127 ^ v164;
  v169 = *(_DWORD *)(result + 612) & ~(v127 ^ v164);
  v170 = v165 & v137;
  *(_DWORD *)(result + 476) = v149;
  v171 = *(_DWORD *)(result + 188);
  v172 = v137 & v167 ^ *(_DWORD *)(result + 740) ^ v163;
  v173 = v159 | v171;
  v174 = v167 ^ *(_DWORD *)(result + 764);
  v175 = ~v171;
  v176 = v152 & ~v171 ^ v169;
  v177 = *(_DWORD *)(result + 612);
  v178 = *(_DWORD *)(result + 124);
  v179 = *(_DWORD *)(result + 252) ^ *(_DWORD *)(result + 40) ^ v156 ^ v160 ^ v173;
  *(_DWORD *)(result + 48) ^= *(_DWORD *)(result + 276) ^ *(_DWORD *)(result + 364) & ~v137;
  v180 = v179 ^ v178 & ~v176;
  v181 = *(_DWORD *)(result + 144);
  v182 = *(_DWORD *)(result + 48) & v181;
  v183 = ~*(_DWORD *)(result + 48) & v181;
  v184 = ~*(_DWORD *)(result + 48);
  v185 = v123 ^ v183;
  v186 = v166 & v177;
  v187 = *(_DWORD *)(result + 48);
  v188 = v187 ^ *(_DWORD *)(result + 144);
  v189 = v170 ^ v129;
  v190 = v182;
  v191 = v187 & v122;
  v192 = v119 ^ v187 & v122;
  v193 = v185 & ~v53;
  v194 = v120 & v183;
  v195 = (v189 | *(_DWORD *)(result + 188)) ^ v174 ^ *(_DWORD *)(result + 336) ^ v137;
  v196 = *(_DWORD *)(result + 48) | *(_DWORD *)(result + 144);
  v197 = v180 & ~*(_DWORD *)(result + 224);
  v198 = v124 ^ *(_DWORD *)(result + 804);
  v199 = v192 & v53;
  v200 = v130 & *(_DWORD *)(result + 612) ^ v168;
  v201 = v162 & ~*(_DWORD *)(result + 612);
  v202 = v195 ^ (v126 ^ *(_DWORD *)(result + 740) ^ v186 ^ v172 & v175) & *(_DWORD *)(result + 124);
  v203 = v120 & ~v188;
  v204 = v186 ^ v198;
  v205 = v198 ^ *(_DWORD *)(result + 612);
  v206 = v201 ^ v158;
  v207 = v120 & ~(v196 & v184);
  v208 = v120 & ~v196 ^ *(_DWORD *)(result + 48);
  v209 = v53 & ~((v120 ^ v196) & v184);
  v210 = v53 & ~(v203 ^ v188);
  v211 = v203 ^ *(_DWORD *)(result + 144);
  v212 = v193 ^ v211;
  v213 = ~v190 & *(_DWORD *)(result + 48);
  v214 = v199 ^ v211;
  v215 = v212;
  v216 = v120 & ~v190 ^ *(_DWORD *)(result + 144) ^ (v120 & v190 ^ v188) & v53;
  v217 = (*(_DWORD *)(result + 612) & ~v126 ^ *(_DWORD *)(result + 252)) & v175;
  v218 = v120 ^ v191 ^ v210;
  v219 = *(_DWORD *)(result + 352);
  v220 = v180 & v219;
  v221 = v209 ^ v120 ^ v196;
  v222 = v180 & ~*(_DWORD *)(result + 260) ^ v219 ^ (v197 ^ v219) & v101;
  v223 = v180 & ~*(_DWORD *)(result + 528);
  v224 = v194 ^ v188 ^ v208 & v53;
  v225 = v180 & ~*(_DWORD *)(result + 272) ^ *(_DWORD *)(result + 72);
  v226 = v222 & v144;
  v227 = *(_DWORD *)(result + 272) ^ *(_DWORD *)(result + 612) ^ v223;
  v228 = v144 & ~((v180 & *(_DWORD *)(result + 224) ^ *(_DWORD *)(result + 352)) & v101 ^ *(_DWORD *)(result + 72));
  v229 = *(_DWORD *)(result + 72) ^ v223;
  v230 = v204 ^ v205 & v175;
  v231 = v137 & *(_DWORD *)(result + 472) ^ *(_DWORD *)(result + 220) ^ *(_DWORD *)(result + 612) & ~(*(_DWORD *)(result + 712) ^ v124) ^ v200 & v175;
  v232 = v206 & v175;
  v233 = *(_DWORD *)(result + 80);
  v234 = *(_DWORD *)(result + 144) & ~v53 ^ v207;
  v235 = v233 & ~(v120 & ~v213 ^ v53 & v122);
  v236 = v197 & v101;
  v237 = *(_DWORD *)(result + 260) ^ v197 ^ v197 & v101;
  v238 = v235;
  v239 = v233 & ~v215;
  v240 = v214 & v233;
  v241 = v233 & ~v234;
  v242 = v180 ^ *(_DWORD *)(result + 528);
  v243 = v242 ^ *(_DWORD *)(result + 692);
  v244 = v101 & ~v242 ^ *(_DWORD *)(result + 72);
  v245 = *(_DWORD *)(result + 272);
  v246 = v220 ^ *(_DWORD *)(result + 72);
  v247 = v101 & ~(v180 & v245);
  v248 = (v220 ^ v245 ^ (v180 ^ *(_DWORD *)(result + 272)) & v101) & v144;
  v249 = *(_DWORD *)(result + 528);
  v250 = v248;
  v251 = v249 ^ *(_DWORD *)(result + 100);
  v252 = v249 & ~v101 ^ v220;
  v253 = v218 ^ v239;
  v254 = v221 ^ v240;
  v255 = v101 & ~v229;
  v256 = v229 & v101 ^ v220;
  v257 = v224 ^ v241;
  v258 = v238 ^ v216;
  v259 = v144 & ~v246;
  v260 = v243 ^ (v180 | ~*(_DWORD *)(result + 224)) & v101;
  v261 = v244 & v144;
  v262 = v101 & v225 ^ v180 & ~*(_DWORD *)(result + 412) ^ *(_DWORD *)(result + 464) ^ v144 & ~v237;
  v263 = (v225 ^ v236) & v144;
  v264 = v144 & ~(v236 ^ v180);
  v265 = v180 ^ *(_DWORD *)(result + 172) ^ v247;
  v266 = *(_DWORD *)(result + 252) ^ *(_DWORD *)(result + 240) ^ (v137 & ~*(_DWORD *)(result + 732) ^ *(_DWORD *)(result + 472) | *(_DWORD *)(result + 612)) ^ v232;
  v267 = *(_DWORD *)(result + 124) & ~v230;
  v268 = *(_DWORD *)(result + 32) ^ v127 ^ *(_DWORD *)(result + 712) ^ *(_DWORD *)(result + 612) & ~(v124 ^ *(_DWORD *)(result + 252)) ^ v217;
  v269 = *(_DWORD *)(result + 124) & v231;
  v270 = *(_DWORD *)(result + 212) ^ v258;
  v271 = v258 ^ *(_DWORD *)(result + 252);
  v272 = v202 & ~v253;
  v273 = v253 & ~v202;
  v274 = v254 & ~v202;
  v275 = v202 & ~v254;
  v276 = v257 ^ *(_DWORD *)(result + 140);
  v277 = v257 ^ *(_DWORD *)(result + 784);
  v278 = v227 ^ (v180 & *(_DWORD *)(result + 168) ^ *(_DWORD *)(result + 260)) & v101 ^ v259;
  v279 = (v101 & ~(v180 ^ *(_DWORD *)(result + 72)) ^ *(_DWORD *)(result + 260) ^ v228) & v40;
  v280 = v40 & ~(v256 ^ v250);
  *(_DWORD *)(result + 40) = v180;
  v281 = v255 ^ v251 ^ v264;
  v282 = v266 ^ v267;
  v283 = v268 ^ v269;
  *(_DWORD *)(result + 212) = v273 ^ v270;
  v284 = v271 ^ v272;
  v285 = v277 ^ v274;
  v286 = v276 ^ v275;
  v287 = v260 ^ v261 ^ v279;
  *(_DWORD *)(result + 692) = v287;
  v288 = v278 ^ v40 & ~(v252 ^ v226);
  *(_DWORD *)(result + 168) = v288;
  *(_DWORD *)(result + 252) = v271 ^ v272;
  *(_DWORD *)(result + 784) = v277 ^ v274;
  v289 = v268 ^ v269;
  v290 = v112 | v289;
  v291 = *(_DWORD *)result;
  v292 = (v112 | v289) & v114;
  *(_DWORD *)(result + 32) = v289;
  v293 = v281 ^ v280;
  *(_DWORD *)(result + 100) = v281 ^ v280;
  v294 = v112 | v291;
  v295 = *(_DWORD *)result;
  v296 = v265 ^ v263 ^ v40 & ~v262;
  *(_DWORD *)(result + 172) = v296;
  v297 = v112 ^ v289;
  v298 = v292 ^ v294;
  *(_DWORD *)(result + 336) = v202;
  v299 = v289;
  v300 = v294;
  v301 = v112 ^ v289 | *(_DWORD *)result;
  *(_DWORD *)(result + 140) = v286;
  v302 = v112 & ~v289;
  v303 = v112 & ~v295;
  v304 = v292 ^ v303 ^ (v292 ^ v294) & v47;
  v305 = v290 & ~v295;
  v306 = *(_DWORD *)(result + 428);
  v307 = *(_DWORD *)(result + 288) & v14;
  v308 = ~v295;
  v309 = *(_DWORD *)(result + 76);
  v310 = v112 & v299;
  *(_DWORD *)(result + 240) = v282;
  v311 = v309 ^ v306 ^ v307;
  v312 = *(_DWORD *)(result + 96) ^ *(_DWORD *)(result + 384) ^ v311 & ~*(_DWORD *)(result + 776);
  v313 = *(_DWORD *)(result + 108);
  *(_DWORD *)(result + 176) ^= *(_DWORD *)(result + 668) ^ v311 & ~*(_DWORD *)(result + 432);
  v314 = *(_DWORD *)(result + 176) & v120;
  v315 = v101 & ~v312;
  v316 = v120 | *(_DWORD *)(result + 176);
  v317 = *(_DWORD *)(result + 176) | ~v316;
  v318 = v112 ^ v313 ^ v300 & v47;
  v319 = v282 & ~v120;
  v320 = v120 & ~*(_DWORD *)(result + 176);
  v321 = *(_DWORD *)(result + 176) ^ v120;
  v322 = v282 & v120;
  v323 = v290 & ~v295 ^ v112 & v299 ^ (v301 ^ v292) & v47 ^ (v304 | v312);
  v324 = v301;
  v325 = v317 & v282;
  v326 = v282 & ~v120 ^ v320;
  v327 = v318 ^ v324 ^ (v302 & v308 ^ v283 ^ v47 & ~v300) & ~v312;
  v328 = v317 & v113 ^ *(_DWORD *)(result + 176);
  v329 = v282 & ~v120 ^ v120;
  v330 = v282 & v120 ^ (v282 | v113) ^ *(_DWORD *)(result + 176);
  v331 = v114 & v283;
  v332 = v116 ^ v314 ^ v325;
  v333 = v316 ^ *(_DWORD *)(result + 92);
  v334 = v282 & ~v316;
  v335 = v314 & v110 ^ v321 ^ v282 & ~v316 | *(_DWORD *)(result + 144);
  v336 = v330 & v122;
  v337 = v327 ^ v99 & ~v323;
  v338 = v332 ^ (v328 | *(_DWORD *)(result + 144));
  v339 = v110 & v122 & v326;
  v340 = v114 & v283;
  v341 = ~v101 & v312;
  v342 = v282 ^ *(_DWORD *)(result + 12) ^ v282 & v110 ^ v321 ^ (v113 & ~v329 | *(_DWORD *)(result + 144));
  v343 = v283 ^ *(_DWORD *)(result + 52);
  v344 = ((v297 ^ v300) & v47 ^ v290 ^ (~(v112 & v299) & v112 | *(_DWORD *)result)) & ~v312;
  v345 = v340 & v308 ^ v112;
  v346 = v101 ^ v312 ^ v137;
  v347 = v282 & ~v314;
  v348 = v333 ^ (v282 & v110 ^ v322 | *(_DWORD *)(result + 144));
  v349 = v345;
  v350 = v338 ^ *(_DWORD *)(result + 24) & ~(v339 ^ v321 & v282 & v110);
  v351 = (v101 | v312) ^ v16 ^ (v101 ^ v312) & v112;
  v352 = v321 ^ v322 ^ (v334 ^ v320) & v110;
  v353 = (*(_DWORD *)(result + 176) & ~v282 & v110 ^ v314 ^ v335) & *(_DWORD *)(result + 24) ^ v342;
  v354 = (v296 | v286) & ~v286;
  v355 = v348 ^ v325 ^ (v347 | v113) ^ *(_DWORD *)(result + 24) & ~(v320 & v282 ^ v314 ^ v336 ^ (v347 | v113));
  v356 = ((v314 | v113) ^ v321 ^ v347 | *(_DWORD *)(result + 144)) ^ v352;
  v357 = v101 & v312 & v112;
  v358 = v112 & ~(v101 | v312) ^ v101 ^ v312;
  v359 = v355;
  v360 = ~(v101 & ~v312);
  *(_DWORD *)(result + 68) ^= v321 ^ v320 & v282 ^ (v113 | v319 ^ v321) ^ (v334 ^ (v113 | *(_DWORD *)(result + 176))) & v122 ^ *(_DWORD *)(result + 24) & ~v356;
  *(_DWORD *)(result + 108) = v337;
  *(_DWORD *)(result + 12) = v353;
  *(_DWORD *)(result + 788) = v350;
  v361 = ~v341 & v112;
  *(_DWORD *)(result + 96) = v312;
  v362 = v112 & ~(v360 & v101);
  *(_DWORD *)(result + 76) = v311;
  *(_DWORD *)(result + 92) = v355;
  v363 = v47 & ~v312 & ~v290 ^ (v298 | v47);
  v364 = v101 ^ v311 ^ v357 ^ (v361 ^ v360 & v101 | v157) ^ ((v357 ^ v101 & v312) & v157 ^ v358) & v44 ^ (((v101 ^ v312) & v112 ^ v101 & ~v312 | v157) ^ v312 ^ v362 ^ v44 & ~(v358 ^ v101 & v312 & ~v157)) & *(_DWORD *)(result + 224);
  v365 = (v290 ^ v303) & v47;
  v366 = v363 & v99;
  v367 = v331 ^ v305;
  v368 = v360 & v112 ^ v346 ^ ((v101 ^ v312) & v112 ^ v101 | v157) ^ *(_DWORD *)(result + 224) & ~((~v101 & v112 ^ v101 & v312) & ~v157 ^ (~v101 & v112 ^ v315 & ~v157) & v44);
  v369 = (v112 & ~(v101 ^ v312) ^ v101) & ~v157 ^ v351 ^ v44 & ~(v112 & ~(v101 ^ v312) & v157 ^ v101) ^ *(_DWORD *)(result + 224) & ~((v357 ^ (v101 | v312)) & ~v157 ^ v357 ^ v312 ^ v44 & ~(v341 ^ ~v101 & v157));
  v370 = v310 | *(_DWORD *)result;
  v371 = v310 & v308 ^ v112 ^ v47 & ~v292;
  v372 = ((v300 ^ v112) & ~v47 | v312) ^ v343 ^ v310 & v308 ^ v47 & (v308 | ~v112) ^ v99 & ~(v349 ^ v344);
  *(_DWORD *)(result + 52) = v372;
  v373 = ~v337 & (v296 ^ v286);
  *(_DWORD *)(result + 544) = (~v296 & v286 ^ (v337 | v286) | v350) ^ (v354 | v337);
  *(_DWORD *)(result + 4) = v368 ^ v44 & ~(v112 & ~v157 & v315 ^ v341 ^ v362);
  v374 = (v296 | v286) & ~v286;
  *(_DWORD *)(result + 388) = v296 ^ v286 ^ v337 ^ (~v296 & v286 & ~v337 ^ v286 | v350);
  *(_DWORD *)(result + 400) = (v296 ^ v286 | v337) ^ v354 ^ (v373 ^ v296) & ~v350;
  *(_DWORD *)(result + 532) = (v374 ^ v337) & ~v350 ^ (~v337 ^ ~v296) & v286;
  *(_DWORD *)(result + 548) = v373 ^ v374 ^ ((v337 | v296 & v286) ^ (v296 | v286)) & ~v350;
  *(_DWORD *)(result + 488) = (v350 | v286 ^ v373) ^ v373;
  *(_DWORD *)(result + 280) = ~v337 & v296 ^ v296 & v286 ^ (v286 ^ ~v337 & (v296 | v286)) & ~v350;
  v375 = v370 ^ v290;
  v376 = v296 | v286 | v337;
  *(_DWORD *)(result + 600) = v296 & v286 ^ v373 ^ ((v337 | v286) ^ (v296 | v286) | v350);
  *(_DWORD *)(result + 764) = v296 & v286 ^ v376 ^ ((v337 | v286) ^ v296 & ~v286 | v350);
  *(_DWORD *)(result + 360) = v296 & v286 & ~v350 ^ v376 ^ (v296 | v286);
  *(_DWORD *)(result + 428) = (v337 | v286) ^ v286 ^ ~v350 & (v337 ^ v296);
  *(_DWORD *)(result + 464) = ((v337 | v296) ^ v296) & v350 ^ (v337 | v296);
  *(_DWORD *)(result + 200) = (v337 | v296) ^ v296 ^ (v337 | v296 | v350);
  v377 = (v286 ^ (v354 | v337) | v350) ^ v286 ^ (v354 | v337);
  v378 = v359 & ~v288;
  *(_DWORD *)(result + 804) = v378;
  *(_DWORD *)(result + 288) = v378;
  *(_DWORD *)(result + 732) = v378 ^ v288;
  *(_DWORD *)(result + 472) = v288 & v359;
  *(_DWORD *)(result + 104) = ((v337 | v286) ^ v296 | v350) ^ v286;
  v379 = v364 & v353 & ~v337;
  v380 = v364 & ~v353;
  *(_DWORD *)(result + 192) = v293 & v353;
  *(_DWORD *)(result + 356) = v369 & ~v287 ^ v287;
  *(_DWORD *)(result + 16) = v287 & v369;
  *(_DWORD *)(result + 560) = (v364 | v353 | v337) ^ v380;
  *(_DWORD *)(result + 604) = (v364 ^ v353 | v337) ^ v353;
  *(_DWORD *)(result + 648) = v202 & ~v103;
  *(_DWORD *)(result + 416) = v202 & v103;
  *(_DWORD *)(result + 20) = v293 & v353 | v285;
  *(_DWORD *)(result + 316) = ~v293 & v353;
  *(_DWORD *)(result + 528) = v296 ^ v376 ^ (v296 ^ (v354 | v337) | v350);
  *(_DWORD *)(result + 272) = v377;
  *(_DWORD *)(result + 756) = v380 | v337;
  *(_DWORD *)(result + 412) = (v364 | v353) ^ (v337 | v353);
  *(_DWORD *)(result + 408) = (v337 | v353) ^ v353;
  *(_DWORD *)(result + 448) = v380 ^ v337;
  *(_DWORD *)(result + 264) = v379 ^ v380;
  *(_DWORD *)(result + 364) = v379 ^ (v364 | v353);
  *(_DWORD *)(result + 808) = v337 | v353;
  *(_DWORD *)(result + 260) = ~v337 & v353 ^ v353;
  *(_DWORD *)(result + 276) = ~v337 & v353;
  v381 = *(_DWORD *)(result + 124);
  *(_DWORD *)(result + 148) = v369;
  *(_DWORD *)(result + 432) = v369 & ~v372;
  *(_DWORD *)(result + 680) = v372 | v369;
  *(_DWORD *)(result + 568) = v372 | v369;
  *(_DWORD *)(result + 712) = v372 | v369;
  *(_DWORD *)(result + 792) = v372 | v369;
  *(_DWORD *)(result + 740) = v380 ^ (v337 | v353);
  *(_DWORD *)(result + 348) = v364;
  v382 = v367 ^ v381 ^ v47 & ~(v310 ^ v300) ^ (v47 & v302 ^ v283 & v308 | v312) ^ (~v310 & v47 ^ v375 ^ (v305 ^ v283 ^ v47 & ~(v302 ^ v300) | v312)) & v99;
  v383 = v157 ^ v72 ^ v112 ^ v101 ^ v312 ^ (v357 ^ v312 ^ ~v157 & v312 & (v112 ^ v101) ^ ~v341 & v44) & *(_DWORD *)(result + 224);
  v384 = (v364 ^ v353) & ~v337;
  v385 = *(_DWORD *)(result + 164) ^ *(_DWORD *)result ^ v302;
  *(_DWORD *)(result + 124) = v382;
  v386 = ~v337 & v364;
  *(_DWORD *)(result + 468) = v382 & v284;
  v387 = v385 ^ v365 ^ v366 ^ (v371 | v312);
  v388 = v387 & ~v293;
  v389 = ~v387 & v293;
  *(_DWORD *)(result + 688) = v387 & v353;
  v390 = ~v388 & v387;
  v391 = ~v387 ^ *(_DWORD *)(result + 688);
  v392 = *(_DWORD *)(result + 688) & v293;
  *(_DWORD *)(result + 60) = v383 ^ (v341 ^ v361 | ~v157) & v44;
  *(_DWORD *)(result + 436) = v384 ^ v364 & v353;
  *(_DWORD *)(result + 164) = v387;
  *(_DWORD *)(result + 728) = v384 ^ v353;
  *(_DWORD *)(result + 420) = v384;
  *(_DWORD *)(result + 656) = v384 ^ (v364 | v353);
  *(_DWORD *)(result + 312) = v380 ^ (v353 & ~v364 | v337);
  *(_DWORD *)(result + 620) = (v353 & ~v364 | v337) ^ v353;
  *(_DWORD *)(result + 352) = v364 ^ v353 ^ v386;
  v393 = *(_DWORD *)(result + 468);
  *(_DWORD *)(result + 116) = v386 ^ v353;
  *(_DWORD *)(result + 296) = v353 & ~v364 ^ v337;
  *(_DWORD *)(result + 552) = v353 & ~v364 & ~v337 ^ (v364 | v353);
  *(_DWORD *)(result + 700) = v364 | v337;
  v394 = v389 ^ v293 & v353;
  *(_DWORD *)(result + 524) = v393 ^ v284;
  *(_DWORD *)(result + 636) = v382 ^ v284;
  *(_DWORD *)(result + 612) = ~v293 & v353 ^ (v293 | v387);
  *(_DWORD *)(result + 736) = v389 & v353 ^ v389;
  *(_DWORD *)(result + 628) = v387 ^ v389 & v353;
  *(_DWORD *)(result + 300) = v293 ^ v353 & ~v389;
  *(_DWORD *)(result + 780) = ~v388 & v353 ^ v389;
  *(_DWORD *)(result + 384) = v388 ^ (v293 | v387) & v353;
  *(_DWORD *)(result + 520) = v388 & v353 ^ v388;
  *(_DWORD *)(result + 492) = v388 & v353 ^ v389;
  *(_DWORD *)(result + 572) = v353 & ~v390 ^ v388;
  v395 = v388 & v353 ^ v293 ^ v387;
  *(_DWORD *)(result + 580) = v390 ^ v388 & v353;
  *(_DWORD *)(result + 232) = v293 & v391;
  v396 = *(_DWORD *)(result + 152);
  v397 = *(_DWORD *)(result + 332);
  *(_DWORD *)(result + 768) = v390 ^ v392;
  *(_DWORD *)(result + 268) = v395;
  v398 = *(_DWORD *)(result + 536);
  *(_DWORD *)(result + 668) = v394;
  *(_DWORD *)(result + 504) = (v293 ^ v353) & ~v387;
  v399 = v353 & ~(v293 | v387);
  *(_DWORD *)(result + 776) = v293 ^ v387 ^ ~v387 & v353;
  *(_DWORD *)(result + 284) = v353 & ~(v293 ^ v387) | v285;
  *(_DWORD *)(result + 480) = (v293 ^ v387) & v353;
  v400 = v398 ^ v396 ^ v311 & v397;
  *(_DWORD *)(result + 156) = v399 ^ (v293 | v387);
  *(_DWORD *)(result + 584) = (v293 ^ v387) & v353 ^ (v293 | v387);
  *(_DWORD *)(result + 772) = v399;
  *(_DWORD *)(result + 720) = (v149 ^ v134 & v400) & v99;
  *(_DWORD *)(result + 752) = (v400 & ~v146 ^ v133) & ~v46;
  *(_DWORD *)(result + 332) = v134 & v400;
  *(_DWORD *)(result + 536) = v400 & ~(v134 & v400);
  *(_DWORD *)(result + 596) = v133 | v400;
  *(_DWORD *)(result + 152) = v400;
  return result;
}
