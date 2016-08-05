int __fastcall sub_8930C(int result)
{
  int v1; // r10@1
  int v2; // r2@1
  int v3; // r1@1
  int v4; // ST1C_4@1
  int v5; // ST00_4@1
  int v6; // ST28_4@1
  int v7; // ST34_4@1
  int v8; // ST44_4@1
  int v9; // ST18_4@1
  int v10; // ST0C_4@1
  int v11; // ST14_4@1
  int v12; // ST8C_4@1
  int v13; // r3@1
  int v14; // r6@1
  int v15; // ST24_4@1
  int v16; // r8@1
  int v17; // r12@1
  int v18; // ST74_4@1
  int v19; // ST40_4@1
  int v20; // r5@1
  int v21; // ST08_4@1
  int v22; // r11@1
  int v23; // r9@1
  int v24; // r6@1
  int v25; // ST10_4@1
  int v26; // ST04_4@1
  int v27; // lr@1
  int v28; // ST7C_4@1
  int v29; // r3@1
  int v30; // ST48_4@1
  int v31; // r4@1
  int v32; // r7@1
  int v33; // ST20_4@1
  int v34; // ST38_4@1
  int v35; // ST64_4@1
  int v36; // r8@1
  int v37; // r3@1
  int v38; // r4@1
  int v39; // r12@1
  int v40; // r3@1
  int v41; // r5@1
  int v42; // r3@1
  int v43; // ST60_4@1
  int v44; // ST84_4@1
  int v45; // ST58_4@1
  int v46; // ST2C_4@1
  int v47; // ST5C_4@1
  int v48; // ST6C_4@1
  int v49; // r9@1
  int v50; // r5@1
  int v51; // ST9C_4@1
  int v52; // ST54_4@1
  int v53; // ST1C_4@1
  int v54; // r11@1
  int v55; // ST3C_4@1
  int v56; // ST70_4@1
  int v57; // ST88_4@1
  int v58; // r1@1
  int v59; // ST90_4@1
  int v60; // ST4C_4@1
  int v61; // ST30_4@1
  int v62; // r8@1
  int v63; // ST10_4@1
  int v64; // r7@1
  int v72; // ST80_4@1
  int v73; // r11@1
  int v74; // r5@1
  int v75; // ST68_4@1
  int v76; // r2@1
  int v77; // ST64_4@1
  int v78; // ST78_4@1
  int v79; // ST50_4@1
  int v80; // r8@1
  int v81; // r5@1
  int v82; // ST38_4@1
  int v83; // ST00_4@1
  int v84; // ST08_4@1
  int v85; // r4@1
  int v86; // ST58_4@1
  int v87; // ST60_4@1
  int v88; // r7@1
  int v89; // r11@1
  int v90; // ST20_4@1
  int v91; // r9@1
  int v92; // r5@1
  int v93; // r7@1
  int v94; // ST0C_4@1
  int v95; // r12@1
  int v96; // r3@1
  int v97; // lr@1
  int v98; // ST5C_4@1
  int v99; // r4@1
  int v100; // ST00_4@1
  int v101; // ST34_4@1
  int v102; // r9@1
  int v103; // ST08_4@1
  int v104; // r7@1
  int v105; // ST14_4@1
  int v106; // ST28_4@1
  int v107; // r8@1
  int v108; // r3@1
  int v109; // ST24_4@1
  int v110; // r12@1
  int v111; // ST18_4@1
  int v112; // r9@1
  int v113; // ST00_4@1
  int v114; // r5@1
  int v115; // r7@1
  int v116; // ST08_4@1
  int v117; // r9@1
  int v118; // r8@1
  int v119; // r2@1
  int v120; // lr@1
  int v121; // STA0_4@1
  int v122; // r4@1
  int v123; // r6@1
  int v124; // r2@1
  int v125; // r3@1
  int v126; // ST38_4@1
  int v127; // r5@1
  int v128; // ST00_4@1
  int v129; // ST78_4@1
  int v130; // lr@1
  int v131; // r5@1
  int v132; // ST80_4@1
  int v133; // r3@1
  int v134; // ST18_4@1
  int v135; // r5@1
  int v136; // r4@1
  int v137; // ST70_4@1
  int v138; // ST94_4@1
  int v139; // ST90_4@1
  int v140; // ST84_4@1
  int v141; // ST64_4@1
  int v142; // ST98_4@1
  int v143; // ST04_4@1
  int v144; // r3@1
  int v145; // r1@1
  int v146; // ST34_4@1
  int v147; // lr@1
  int v148; // r2@1
  int v149; // r6@1
  int v150; // STA4_4@1
  int v151; // ST3C_4@1
  int v152; // r1@1
  int v153; // r8@1
  int v154; // ST30_4@1
  int v155; // r9@1
  int v156; // STA8_4@1
  int v157; // r7@1
  int v158; // ST14_4@1
  int v159; // r5@1
  int v160; // ST40_4@1
  int v161; // ST28_4@1
  int v162; // ST24_4@1
  int v163; // r11@1
  int v164; // r4@1
  int v165; // ST88_4@1
  int v166; // lr@1
  int v167; // r12@1
  int v168; // ST6C_4@1
  int v169; // ST58_4@1
  int v170; // ST48_4@1
  int v171; // r5@1
  int v172; // ST44_4@1
  int v173; // r8@1
  int v174; // r1@1
  int v175; // ST0C_4@1
  int v176; // r9@1
  int v177; // r6@1
  int v178; // r7@1
  int v179; // ST24_4@1
  int v180; // r1@1
  int v181; // r7@1
  int v182; // ST30_4@1
  int v183; // ST14_4@1
  int v184; // r10@1
  int v185; // ST28_4@1
  int v187; // lr@1
  int v189; // r6@1
  int v191; // ST0C_4@1
  int v192; // r2@1
  int v193; // r9@1
  int v194; // r5@1
  int v195; // r7@1
  int v196; // ST3C_4@1
  int v197; // ST14_4@1
  int v198; // r12@1
  int v199; // lr@1
  int v200; // ST48_4@1
  int v201; // ST04_4@1
  int v202; // r1@1
  int v203; // ST6C_4@1
  int v204; // ST58_4@1
  int v205; // ST88_4@1
  int v206; // ST68_4@1
  int v207; // ST90_4@1
  int v208; // STB0_4@1
  int v209; // ST28_4@1
  int v210; // r2@1
  int v211; // r3@1
  int v212; // lr@1
  int v213; // r3@1
  int v214; // r12@1
  int v215; // r4@1
  int v216; // r10@1
  int v217; // ST24_4@1
  int v218; // r9@1
  int v219; // ST0C_4@1
  int v220; // r1@1
  int v221; // ST40_4@1
  int v222; // r5@1
  int v223; // r11@1
  int v224; // STC4_4@1
  int v225; // r6@1
  int v226; // r6@1
  int v227; // lr@1
  int v228; // STD0_4@1
  int v229; // r4@1
  int v230; // r8@1
  int v231; // r12@1
  int v232; // r7@1
  int v233; // STCC_4@1
  int v234; // ST30_4@1
  int v235; // STD4_4@1
  int v236; // lr@1
  int v237; // r5@1
  int v238; // r7@1
  int v239; // ST60_4@1
  int v240; // STC8_4@1
  int v241; // r4@1
  int v242; // STBC_4@1
  int v243; // r10@1
  int v244; // STC0_4@1
  int v245; // ST10_4@1
  int v246; // STB4_4@1
  int v247; // STB8_4@1
  int v248; // r12@1
  int v249; // lr@1
  int v250; // r7@1
  int v251; // r8@1
  int v252; // ST1C_4@1
  int v253; // r9@1
  int v254; // r2@1
  int v255; // lr@1
  int v256; // r10@1
  int v257; // r2@1
  int v258; // r3@1
  int v259; // r5@1
  int v260; // r4@1
  int v261; // ST20_4@1
  int v262; // r2@1
  int v263; // r10@1
  int v264; // r12@1
  int v265; // r3@1
  int v266; // r8@1
  int v267; // r5@1
  int v268; // r3@1
  int v269; // r1@1
  int v270; // r8@1
  int v271; // r12@1
  int v272; // STA4_4@1
  int v273; // r7@1
  int v274; // r1@1
  int v275; // r9@1
  int v276; // ST30_4@1
  int v277; // ST1C_4@1
  int v278; // ST0C_4@1
  int v279; // ST5C_4@1
  int v280; // ST7C_4@1
  int v281; // r11@1
  int v282; // r2@1
  int v283; // ST0C_4@1
  int v284; // ST24_4@1
  int v285; // r3@1
  int v286; // ST94_4@1
  int v287; // r4@1
  int v288; // ST24_4@1
  int v289; // r5@1
  int v290; // ST70_4@1
  int v291; // lr@1
  int v292; // ST74_4@1
  int v293; // r12@1
  int v294; // ST84_4@1
  int v295; // lr@1
  int v296; // r9@1
  int v297; // r4@1
  int v298; // r3@1
  int v299; // r3@1
  int v300; // ST60_4@1
  int v301; // ST24_4@1
  int v302; // r12@1
  int v303; // r1@1
  int v304; // ST78_4@1
  int v305; // lr@1
  int v306; // ST80_4@1
  int v307; // ST20_4@1
  int v308; // ST10_4@1
  int v309; // ST88_4@1
  int v310; // ST98_4@1
  int v311; // r1@1
  int v312; // ST90_4@1
  int v313; // r5@1
  int v314; // r2@1
  int v315; // ST44_4@1
  int v316; // r4@1
  int v317; // r11@1
  int v318; // r9@1
  int v319; // r3@1
  int v320; // ST70_4@1
  int v321; // ST9C_4@1
  int v322; // ST98_4@1
  int v323; // lr@1
  int v324; // ST34_4@1
  int v325; // ST8C_4@1
  int v326; // r6@1
  int v327; // ST78_4@1
  int v328; // r11@1
  int v329; // lr@1
  int v330; // r10@1
  int v331; // ST0C_4@1
  int v332; // r11@1
  int v333; // ST5C_4@1
  int v334; // ST64_4@1
  int v335; // r6@1
  int v336; // r5@1
  int v337; // r9@1
  int v338; // ST74_4@1
  int v339; // r4@1
  int v340; // r2@1
  int v341; // lr@1
  int v342; // r3@1
  int v343; // ST34_4@1
  int v344; // r7@1
  int v345; // ST68_4@1
  int v346; // r6@1
  int v347; // ST14_4@1
  int v348; // ST74_4@1
  int v349; // r10@1
  int v350; // ST70_4@1
  int v351; // ST7C_4@1
  int v352; // r3@1
  int v353; // r7@1
  int v354; // ST90_4@1
  int v355; // r3@1
  int v356; // ST9C_4@1
  int v357; // r8@1
  int v358; // r12@1
  int v359; // STB0_4@1
  int v360; // STA8_4@1
  int v361; // r5@1
  int v362; // ST38_4@1
  int v363; // r11@1
  int v364; // r10@1
  int v365; // STC8_4@1
  int v366; // STCC_4@1
  int v367; // r4@1
  int v368; // r6@1
  int v369; // r7@1
  int v370; // lr@1
  int v371; // ST20_4@1
  int v372; // r1@1
  int v373; // ST28_4@1
  int v374; // r7@1
  int v375; // r4@1
  int v376; // r3@1
  int v377; // r6@1
  int v378; // r1@1
  int v379; // r12@1
  int v380; // r5@1
  int v381; // r10@1
  int v382; // r12@1
  int v383; // r6@1
  int v384; // r5@1
  int v385; // r11@1
  int v386; // r2@1
  int v387; // r1@1
  int v388; // ST50_4@1
  int v389; // ST5C_4@1
  int v390; // r3@1
  int v391; // ST54_4@1
  int v392; // ST04_4@1
  int v393; // ST48_4@1
  int v394; // ST38_4@1
  int v395; // r6@1
  int v396; // ST2C_4@1
  int v397; // ST78_4@1
  int v398; // ST64_4@1
  int v399; // ST4C_4@1
  int v400; // r5@1
  int v401; // r8@1
  int v402; // ST70_4@1
  int v403; // r11@1
  int v404; // ST7C_4@1
  int v405; // STB0_4@1
  int v406; // ST30_4@1
  int v407; // ST84_4@1
  int v408; // r1@1
  int v409; // ST80_4@1
  int v410; // ST60_4@1
  int v411; // r4@1
  int v412; // r11@1
  int v413; // ST90_4@1
  int v414; // STB8_4@1
  int v415; // STBC_4@1
  int v416; // STA0_4@1
  int v417; // ST9C_4@1
  int v418; // ST34_4@1
  int v419; // ST78_4@1
  int v420; // ST98_4@1
  int v421; // r5@1
  int v422; // STCC_4@1
  int v423; // ST94_4@1
  int v424; // r6@1
  int v425; // STD4_4@1
  int v426; // STB4_4@1
  int v427; // ST1C_4@1
  int v428; // STAC_4@1
  int v429; // r1@1
  int v430; // r3@1
  int v431; // STB8_4@1
  int v432; // r2@1
  int v433; // ST5C_4@1
  int v434; // ST50_4@1
  int v435; // ST7C_4@1
  int v436; // r4@1
  int v437; // STC8_4@1
  int v438; // STD0_4@1
  int v439; // r5@1
  int v440; // STC4_4@1
  int v441; // STD8_4@1
  int v442; // STA0_4@1
  int v443; // ST9C_4@1
  int v444; // STAC_4@1
  int v445; // STA8_4@1
  int v446; // ST2C_4@1
  int v447; // ST98_4@1
  int v448; // ST54_4@1
  int v449; // ST5C_4@1
  int v450; // ST6C_4@1
  int v451; // r4@1
  int v452; // r3@1
  int v453; // ST7C_4@1
  int v454; // STD4_4@1
  int v455; // r2@1
  int v456; // STE0_4@1
  int v457; // ST70_4@1
  int v458; // lr@1
  int v459; // ST84_4@1
  int v460; // STB0_4@1
  int v461; // ST90_4@1
  int v462; // STB4_4@1
  int v463; // STBC_4@1
  int v464; // STB8_4@1
  int v465; // STC0_4@1
  int v466; // ST3C_4@1
  int v467; // STEC_4@1
  int v468; // STE8_4@1
  int v469; // STC4_4@1
  int v470; // STC8_4@1
  int v471; // STD0_4@1
  int v472; // r2@1
  int v473; // r3@1
  int v474; // r7@1
  int v475; // ST58_4@1
  int v476; // STD8_4@1
  int v477; // ST4C_4@1
  int v478; // ST50_4@1
  int v479; // ST38_4@1
  int v480; // r4@1
  int v481; // r7@1
  int v482; // ST34_4@1
  int v483; // ST28_4@1
  int v484; // r11@1
  int v485; // r2@1
  int v486; // STAC_4@1
  int v487; // STCC_4@1
  int v488; // STE0_4@1
  int v489; // ST80_4@1
  int v490; // ST8C_4@1
  int v491; // r4@1
  int v492; // ST6C_4@1
  int v493; // ST70_4@1
  int v494; // ST7C_4@1
  int v495; // ST54_4@1
  int v496; // ST78_4@1
  int v497; // r4@1
  int v498; // ST90_4@1
  int v499; // ST98_4@1
  int v500; // STA8_4@1
  int v501; // ST9C_4@1
  int v502; // ST48_4@1
  int v503; // STA0_4@1
  int v504; // STBC_4@1
  int v505; // r3@1
  int v506; // STD0_4@1
  int v507; // ST5C_4@1
  int v508; // ST60_4@1
  int v509; // ST38_4@1
  int v510; // ST3C_4@1
  int v511; // ST58_4@1
  int v512; // ST34_4@1
  int v513; // STAC_4@1
  int v514; // STB0_4@1
  int v515; // r1@1
  int v516; // ST50_4@1
  int v517; // r6@1
  int v518; // r4@1
  int v519; // ST6C_4@1
  int v520; // ST70_4@1
  int v521; // ST7C_4@1
  int v522; // ST84_4@1
  int v523; // ST90_4@1
  int v524; // STA0_4@1
  int v525; // STB8_4@1
  int v526; // r12@1

  v1 = ~*(_DWORD *)(result + 120);
  v2 = *(_DWORD *)(result + 316);
  v3 = *(_DWORD *)(result + 720);
  v4 = v1 & *(_DWORD *)(result + 688) ^ *(_DWORD *)result;
  v5 = *(_DWORD *)(result + 216);
  v6 = v4 & v5 ^ v1 & v2 ^ v3;
  v7 = v1 & v2 ^ v3;
  v8 = *(_DWORD *)(result + 508);
  v9 = v5 & ~(v1 & v3) ^ *(_DWORD *)(result + 684);
  v10 = *(_DWORD *)(result + 684) & *(_DWORD *)(result + 120);
  v11 = v1 & v3;
  v12 = *(_DWORD *)(result + 436);
  v13 = v1 & *(_DWORD *)result;
  v14 = *(_DWORD *)(result + 120);
  v15 = *(_DWORD *)(result + 184) ^ *(_DWORD *)(result + 120);
  v16 = v3 | v14;
  v17 = *(_DWORD *)(result + 684) | v14;
  v18 = *(_DWORD *)(result + 416);
  v19 = *(_DWORD *)(result + 388);
  v20 = v13 ^ *(_DWORD *)result;
  v21 = *(_DWORD *)(result + 120) | v2;
  v22 = *(_DWORD *)(result + 184) | *(_DWORD *)(result + 120);
  v23 = *(_DWORD *)(result + 120) | *(_DWORD *)result;
  v24 = v1 & v2 ^ *(_DWORD *)(result + 684);
  v25 = (*(_DWORD *)(result + 492) ^ v2 ^ *(_DWORD *)(result + 336)) & *(_DWORD *)(result + 248);
  v26 = v16 ^ v2;
  v27 = v13 ^ v3;
  v28 = *(_DWORD *)(result + 696);
  v29 = *(_DWORD *)(result + 712);
  v30 = *(_DWORD *)(result + 520);
  v31 = v29 | *(_DWORD *)(result + 120);
  v32 = *(_DWORD *)(result + 216);
  v33 = v1 & v3 ^ v3;
  *(_DWORD *)(result + 508) = v9;
  v34 = v32 & ~v20;
  v35 = v20 & v32;
  v36 = v17 ^ v29;
  v37 = *(_DWORD *)(result + 688);
  v38 = v31 ^ v37;
  v39 = v21 ^ v37;
  v40 = *(_DWORD *)(result + 296);
  *(_DWORD *)(result + 340) = v15;
  *(_DWORD *)(result + 436) = v10;
  v41 = v1 & v40;
  v42 = *(_DWORD *)result;
  *(_DWORD *)(result + 388) = v6;
  v43 = v42 ^ v41;
  v44 = v5 & ~v23;
  v45 = v1 & v5;
  v46 = ~*(_DWORD *)(result + 252);
  v47 = v5 & ~v4;
  v48 = v22 ^ *(_DWORD *)result;
  v49 = *(_DWORD *)(result + 332) ^ *(_DWORD *)(result + 48) ^ (*(_DWORD *)(result + 348) | *(_DWORD *)(result + 252)) ^ (*(_DWORD *)(result + 272) & v46 ^ *(_DWORD *)(result + 352)) & ~*(_DWORD *)(result + 4);
  v50 = *(_DWORD *)(result + 144);
  v51 = ~*(_DWORD *)(result + 144);
  v52 = v49 & v51;
  v53 = v49 | v50;
  v54 = *(_DWORD *)(result + 144);
  v55 = v49 ^ v50;
  v56 = v36 ^ v25;
  v57 = (*(_DWORD *)(result + 504) ^ v52) & *(_DWORD *)(result + 16);
  v58 = ~*(_DWORD *)(result + 112);
  v59 = (v49 | v50) & v58;
  v60 = ~*(_DWORD *)(result + 112);
  v61 = v49 ^ v50 | *(_DWORD *)(result + 112);
  v62 = v54 & ~v49;
  v63 = *(_DWORD *)(result + 332) ^ *(_DWORD *)(result + 48) ^ (*(_DWORD *)(result + 348) | *(_DWORD *)(result + 252)) ^ (*(_DWORD *)(result + 272) & v46 ^ *(_DWORD *)(result + 352)) & ~*(_DWORD *)(result + 4);
  v64 = v58 & v54;
  _R1 = v5;
  _R5 = v33;
  __asm { ORN.W           R9, R1, R5 }
  v72 = v5 & ~v39;
  v73 = v34 ^ v26;
  v74 = v35;
  v75 = v2 ^ v21;
  v76 = v5 & ~v38;
  v77 = v38 & v5;
  v78 = v5 & ~v27;
  *(_DWORD *)(result + 712) = *(_DWORD *)(result + 120) ^ *(_DWORD *)result;
  v79 = v62;
  v80 = v74 ^ v24;
  v81 = v5 & ~v43;
  v82 = v24;
  v83 = v1 & *(_DWORD *)(result + 184);
  v84 = v11 ^ v45;
  v85 = *(_DWORD *)(result + 364) ^ v53;
  v86 = v53 | *(_DWORD *)(result + 112);
  v87 = v64 & v63;
  v88 = *(_DWORD *)(result + 248);
  v89 = v73 & v88;
  v90 = *(_DWORD *)(result + 144) & ~v79;
  v91 = _R9 & v88;
  *(_DWORD *)(result + 416) = v47 ^ v26;
  v92 = v81 ^ v75 ^ v88 & ~v80;
  v93 = v76 ^ v10;
  *(_DWORD *)(result + 328) = v77 ^ v15;
  v94 = _R1 & ~v48 ^ *(_DWORD *)(result + 712);
  v95 = v72 ^ v83;
  v96 = (v44 ^ v27) & *(_DWORD *)(result + 248);
  v97 = v84 ^ *(_DWORD *)(result + 296);
  v98 = v61 ^ v63;
  v99 = v85 & ~*(_DWORD *)(result + 16);
  v100 = v7 & ~_R1 ^ *(_DWORD *)(result + 684);
  v101 = v59 ^ v57 | *(_DWORD *)(result + 80);
  *(_DWORD *)(result + 644) = v91 ^ *(_DWORD *)(result + 416);
  v102 = v89 ^ v6;
  v103 = v9 ^ *(_DWORD *)(result + 236);
  v104 = v93 & *(_DWORD *)(result + 248);
  v105 = (v56 ^ v78) & *(_DWORD *)(result + 152);
  v106 = *(_DWORD *)(result + 248) & ~v95;
  v107 = v94 ^ *(_DWORD *)(result + 244);
  v108 = v96 ^ *(_DWORD *)(result + 328);
  v109 = v97 ^ *(_DWORD *)(result + 36);
  v110 = v79 ^ *(_DWORD *)(result + 112) ^ *(_DWORD *)(result + 16) & ~v61;
  v111 = *(_DWORD *)(result + 248) & ~v100;
  v112 = *(_DWORD *)(result + 152) & ~v102;
  v113 = *(_DWORD *)(result + 644) ^ *(_DWORD *)(result + 44);
  v114 = *(_DWORD *)(result + 152) & ~v92;
  *(_DWORD *)(result + 504) = *(_DWORD *)(result + 16) & ~(v90 ^ v87) ^ v86 ^ v55 ^ v101;
  v115 = v104 ^ v103;
  *(_DWORD *)(result + 48) = v63;
  v116 = v113 ^ v112;
  v117 = v115 ^ v114;
  v118 = v107 ^ v105 ^ v111;
  v119 = *(_DWORD *)(result + 80);
  v120 = v109 ^ v106 ^ *(_DWORD *)(result + 152) & ~v108;
  *(_DWORD *)(result + 720) = v26;
  v121 = ~v119;
  v122 = (v99 ^ v61 ^ v63) & ~v119;
  *(_DWORD *)(result + 44) = v116;
  v123 = v120;
  v124 = v82;
  v125 = *(_DWORD *)(result + 308);
  v126 = ~v118;
  v127 = *(_DWORD *)(result + 120);
  *(_DWORD *)(result + 520) = v124;
  v128 = v117;
  v129 = (v127 | v125) ^ v19;
  v130 = v1 & *(_DWORD *)(result + 88);
  v131 = *(_DWORD *)(result + 632);
  *(_DWORD *)(result + 236) = v117;
  v132 = v130;
  *(_DWORD *)(result + 696) = v94;
  v133 = v1 & v131;
  v134 = v118;
  *(_DWORD *)(result + 244) = v118;
  v135 = *(_DWORD *)(result + 120);
  *(_DWORD *)(result + 364) = v110 ^ v122;
  v136 = *(_DWORD *)(result + 120);
  v137 = v135 | *(_DWORD *)(result + 468);
  v138 = v133 ^ v30;
  v139 = v1 & *(_DWORD *)(result + 544);
  v140 = (v136 | *(_DWORD *)(result + 480)) ^ v8;
  v141 = ~v123;
  v142 = (v136 | *(_DWORD *)(result + 408)) ^ *(_DWORD *)(result + 692);
  v143 = (*(_DWORD *)(result + 268) ^ *(_DWORD *)(result + 260) & v46 | *(_DWORD *)(result + 4)) ^ *(_DWORD *)(result + 356) & v46 ^ *(_DWORD *)(result + 160) ^ *(_DWORD *)(result + 360);
  v144 = *(_DWORD *)(result + 224);
  v145 = *(_DWORD *)(result + 524);
  *(_DWORD *)(result + 36) = v123;
  v146 = v123;
  v147 = v143 ^ v145;
  v148 = *(_DWORD *)(result + 96);
  v149 = ~*(_DWORD *)(result + 224);
  v150 = ~*(_DWORD *)(result + 224);
  v151 = ~v143 & *(_DWORD *)(result + 8);
  v152 = v143 | *(_DWORD *)(result + 224);
  v153 = v143 & v149 & *(_DWORD *)(result + 8);
  v154 = ~v143 & *(_DWORD *)(result + 224);
  v155 = v152 & v149 ^ *(_DWORD *)(result + 284);
  v156 = (v147 | v148) ^ v153 ^ v143 ^ v144;
  v157 = ~(v143 & *(_DWORD *)(result + 224));
  v158 = v154 & *(_DWORD *)(result + 8);
  v159 = v143 ^ *(_DWORD *)(result + 8) & (v143 ^ v144);
  v160 = v152 & v149;
  v161 = v143 ^ *(_DWORD *)(result + 8);
  v162 = *(_DWORD *)(result + 8) & ~v152;
  v163 = v157 & *(_DWORD *)(result + 224);
  v164 = *(_DWORD *)(result + 8) & ~(v143 ^ v144);
  v165 = v153 ^ v152 & v149 | v148;
  v166 = v153 ^ (v161 | v148);
  v167 = (v159 | v148) ^ v151 ^ v143;
  v168 = v148 & ~(v151 ^ v143) ^ v159;
  v169 = *(_DWORD *)(result + 8) ^ *(_DWORD *)(result + 4) ^ v163;
  v170 = v157 & *(_DWORD *)(result + 8) ^ v143 & v149;
  v171 = ~*(_DWORD *)(result + 192);
  v172 = v162 ^ v143;
  v173 = v162 ^ v152 ^ (v158 ^ v152 | v148);
  v174 = *(_DWORD *)(result + 8) & ~v163;
  v175 = *(_DWORD *)(result + 740) ^ v154;
  v176 = *(_DWORD *)(result + 224) ^ *(_DWORD *)(result + 148) ^ (v155 | v148) ^ v174 ^ (v156 ^ (v151 ^ v143 ^ (v143 | v148)) & *(_DWORD *)(result + 128)) & v171;
  *(_DWORD *)(result + 332) = v158 ^ v160;
  v177 = *(_DWORD *)(result + 128);
  v178 = v174 ^ v143;
  v179 = *(_DWORD *)(result + 128) & ~(v151 & v148 ^ v143);
  v180 = v167 & v177 ^ v174 ^ v163 ^ (v174 ^ v163 | v148);
  v181 = *(_DWORD *)(result + 332) ^ *(_DWORD *)(result + 76) ^ (v178 | v148);
  v182 = v148 & ~v158;
  v183 = v172 ^ (v163 ^ v164 | v148);
  v184 = v161 ^ *(_DWORD *)(result + 60);
  v185 = v169 ^ v166 & v177;
  _R3 = ~v148;
  v187 = v170 & ~v148;
  _R4 = v175;
  v189 = (v177 & ~v168 ^ *(_DWORD *)(result + 744) ^ v165) & v171;
  __asm { ORN.W           R2, R3, R4 }
  v191 = _R2;
  v192 = v176 ^ *(_DWORD *)(result + 128) & ~v173;
  v193 = v179 ^ *(_DWORD *)(result + 320);
  v194 = *(_DWORD *)(result + 192);
  v195 = v181 ^ v183 & *(_DWORD *)(result + 128);
  v196 = v192;
  v197 = v185 ^ v187 ^ v189;
  v198 = *(_DWORD *)(result + 128);
  *(_DWORD *)(result + 148) = v192;
  *(_DWORD *)(result + 160) = v143;
  *(_DWORD *)(result + 260) = v192 & v134;
  *(_DWORD *)(result + 524) = v192 ^ v134;
  v199 = v195 ^ (v180 | v194);
  *(_DWORD *)(result + 336) = v192 & v126;
  *(_DWORD *)(result + 348) = v134 | v192;
  *(_DWORD *)(result + 492) = (v134 | v192) & v126;
  *(_DWORD *)(result + 4) = v197;
  v200 = v197 ^ v146;
  v201 = v184 ^ v182 ^ v191 & v198 ^ (v193 | v194);
  *(_DWORD *)(result + 60) = v201;
  v202 = *(_DWORD *)(result + 120);
  v203 = ~v192;
  v204 = v199;
  *(_DWORD *)(result + 360) = ~v192 & v134;
  *(_DWORD *)(result + 76) = v199;
  *(_DWORD *)(result + 352) = v197 & v146;
  v205 = v202 | *(_DWORD *)(result + 276);
  v206 = v146 & ~(~v197 & v146);
  v207 = v139 ^ *(_DWORD *)(result + 312);
  v208 = (*(_DWORD *)(result + 584) | *(_DWORD *)(result + 252)) ^ *(_DWORD *)(result + 568);
  v209 = ~v197 & v146;
  v210 = *(_DWORD *)(result + 40) ^ *(_DWORD *)(result + 456) ^ (*(_DWORD *)(result + 472) & v46 ^ *(_DWORD *)(result + 564)) & *(_DWORD *)(result + 156);
  v211 = *(_DWORD *)(result + 72);
  v212 = v211;
  v213 = v211 ^ v210;
  v214 = v210 & ~v212;
  v215 = *(_DWORD *)(result + 136) | v213;
  v216 = v210 & *(_DWORD *)(result + 72);
  v217 = v213 ^ *(_DWORD *)(result + 708);
  v218 = v213 ^ *(_DWORD *)(result + 300);
  v219 = v214 & ~*(_DWORD *)(result + 136);
  v220 = *(_DWORD *)(result + 72) & ~v210;
  v221 = ~*(_DWORD *)(result + 136);
  v222 = v215 ^ v213;
  v223 = v210 ^ *(_DWORD *)(result + 512);
  v224 = *(_DWORD *)(result + 72) ^ *(_DWORD *)(result + 180);
  v225 = *(_DWORD *)(result + 104);
  *(_DWORD *)(result + 40) = v210;
  v226 = ~v225;
  v227 = v220 ^ *(_DWORD *)(result + 516);
  *(_DWORD *)(result + 272) = v214;
  *(_DWORD *)(result + 708) = v217;
  v228 = v215 ^ v220 ^ v227 & v226;
  v229 = v210 & ~v214 ^ v216 & v221;
  v230 = v216 & v221 ^ v214;
  v231 = v214 | *(_DWORD *)(result + 136);
  v232 = *(_DWORD *)(result + 104);
  *(_DWORD *)(result + 564) = v230;
  v233 = v229 | v232;
  v234 = v221 & v210;
  *(_DWORD *)(result + 472) = v219;
  v235 = (v216 ^ v219) & v226 ^ v230 ^ (v217 & v226 ^ v221 & v210) & *(_DWORD *)(result + 8) | *(_DWORD *)(result + 224);
  v236 = v222 | *(_DWORD *)(result + 104);
  v237 = v222 & v226;
  v238 = v87 ^ v52;
  v239 = v218 ^ v236 ^ (v236 ^ v210) & *(_DWORD *)(result + 8) | *(_DWORD *)(result + 224);
  v240 = v213 ^ *(_DWORD *)(result + 156) ^ v231;
  v241 = *(_DWORD *)(result + 16);
  v242 = v53 ^ *(_DWORD *)(result + 736);
  v243 = v241 & ~(v90 ^ v63 & v60);
  v244 = v241 & ~v238;
  v245 = *(_DWORD *)(result + 8) & ~(*(_DWORD *)(result + 700) ^ v237);
  v246 = v90 ^ *(_DWORD *)(result + 112) ^ v243;
  v247 = (v90 ^ *(_DWORD *)(result + 256)) & *(_DWORD *)(result + 16) ^ v98 | *(_DWORD *)(result + 80);
  v248 = v224 ^ (v210 | *(_DWORD *)(result + 136));
  v249 = v210 ^ *(_DWORD *)(result + 136);
  v250 = *(_DWORD *)(result + 304) ^ *(_DWORD *)(result + 172) ^ v249;
  v251 = v46 & *(_DWORD *)(result + 448);
  v252 = v221 & v210 & *(_DWORD *)(result + 104) ^ v217;
  v253 = v213 & v221 ^ (v210 | *(_DWORD *)(result + 72)) ^ v233;
  v254 = *(_DWORD *)(result + 136);
  v255 = v248 ^ (v249 | *(_DWORD *)(result + 104)) ^ *(_DWORD *)(result + 8) & ~(v223 & v226 ^ v213 & v221 ^ v213);
  v256 = v254;
  v257 = v254 ^ v220;
  v258 = *(_DWORD *)(result + 8);
  *(_DWORD *)(result + 292) = v257;
  v259 = (v237 ^ v257) & v258;
  v260 = (v234 & v226 ^ v219) & v258;
  v261 = ((v220 | v256) ^ v234 & v226) & v258;
  v262 = *(_DWORD *)(result + 132);
  v263 = *(_DWORD *)(result + 8) & ~v252;
  v264 = v219 ^ *(_DWORD *)(result + 72);
  v265 = v219 & ~v226;
  v266 = v251 ^ *(_DWORD *)(result + 444);
  v267 = v259 ^ v265;
  *(_DWORD *)(result + 284) = v265;
  v268 = *(_DWORD *)(result + 100);
  v269 = *(_DWORD *)(result + 224);
  v270 = *(_DWORD *)(result + 240) ^ *(_DWORD *)(result + 612) ^ *(_DWORD *)(result + 156) & ~v266;
  *(_DWORD *)(result + 240) = v270;
  v271 = v264 & v226 ^ v240 ^ v245 ^ (v267 | v269);
  *(_DWORD *)(result + 320) = v271;
  *(_DWORD *)(result + 180) = v255 ^ v239;
  v272 = v250 ^ v263 ^ (v260 ^ v228) & v150;
  *(_DWORD *)(result + 172) = v272;
  v273 = v253 ^ v261 ^ v235 ^ v268;
  v274 = *(_DWORD *)(result + 112);
  *(_DWORD *)(result + 100) = v273;
  v275 = v270 & v274;
  v276 = ~v273;
  v277 = v273;
  v278 = v262 ^ v28;
  v279 = *(_DWORD *)(result + 464);
  v280 = v270 & v274 ^ v279;
  v281 = ~*(_DWORD *)(result + 176);
  v282 = v278 ^ v132 ^ v270 & ~v129;
  v283 = *(_DWORD *)(result + 68) ^ *(_DWORD *)(result + 396) ^ v270 & *(_DWORD *)(result + 404) ^ (v270 & v51 ^ *(_DWORD *)(result + 656)) & v281 ^ ((v270 & *(_DWORD *)(result + 656) ^ v279) & v281 ^ v270 & v51 ^ *(_DWORD *)(result + 396)) & *(_DWORD *)(result + 24) ^ *(_DWORD *)(result + 208) & ~((v275 ^ v279) & v281 ^ ((v275 ^ *(_DWORD *)(result + 648) | *(_DWORD *)(result + 176)) ^ v275 ^ *(_DWORD *)(result + 376)) & *(_DWORD *)(result + 24));
  v284 = *(_DWORD *)(result + 116);
  v285 = *(_DWORD *)(result + 220) ^ v18 ^ v137 ^ v270 & ~v138;
  v286 = (v197 ^ v146) & v283;
  *(_DWORD *)(result + 132) = v282;
  *(_DWORD *)(result + 220) = v285;
  v287 = v284 ^ v12;
  *(_DWORD *)(result + 632) = v271 | v285;
  v288 = v140 ^ *(_DWORD *)(result + 204);
  v289 = ~v197 & v146;
  *(_DWORD *)(result + 544) = v271 & v285;
  v290 = v270 & *(_DWORD *)(result + 396);
  *(_DWORD *)(result + 68) = v283;
  *(_DWORD *)(result + 276) = v285 & ~(v271 & v285);
  *(_DWORD *)(result + 612) = v283 & v197 & v146 ^ v209 ^ v206 & v282 ^ ~v273 & (v197 ^ v283 ^ v286 & v282);
  v291 = v271 ^ v285;
  *(_DWORD *)(result + 468) = (v271 | v285) & ~v285;
  *(_DWORD *)(result + 740) = v271 & ~v285;
  *(_DWORD *)(result + 304) = v285 & ~v271;
  v292 = v290 ^ *(_DWORD *)(result + 496);
  v293 = *(_DWORD *)(result + 496);
  v294 = v291;
  v295 = v287 ^ v205 ^ v270 & ~v207;
  *(_DWORD *)(result + 512) = v294;
  v296 = v270 & ~v293;
  v297 = *(_DWORD *)(result + 400);
  *(_DWORD *)(result + 400) = v197 ^ v283;
  v298 = *(_DWORD *)(result + 404);
  *(_DWORD *)(result + 408) = v292;
  *(_DWORD *)(result + 464) = (v273 | (v197 & v146 ^ v283) & ~v282) ^ v289 ^ v197 & v283 ^ v141 & v282 & v197;
  v299 = v270 ^ v298;
  v300 = v295;
  v301 = v288 ^ v270 & ~v142;
  v302 = *(_DWORD *)(result + 176) & ~v299 ^ v299;
  *(_DWORD *)(result + 204) = v301;
  v303 = v295;
  *(_DWORD *)(result + 688) = v289 ^ v197 & v283;
  v304 = v270 & ~v279;
  v305 = v296 ^ v279;
  *(_DWORD *)(result + 116) = v303;
  v306 = v296 ^ *(_DWORD *)(result + 396);
  v307 = *(_DWORD *)(result + 32) ^ v208 ^ (v46 & *(_DWORD *)(result + 440) ^ *(_DWORD *)(result + 596)) & *(_DWORD *)(result + 156);
  v308 = v282;
  v309 = *(_DWORD *)(result + 376) ^ v297;
  v310 = *(_DWORD *)(result + 656) ^ *(_DWORD *)(result + 12) ^ v290;
  v311 = ~v197 & v283;
  v312 = v281 & v60 & v270 ^ v270 & v51 ^ *(_DWORD *)(result + 144);
  v313 = (v296 ^ v279) & v281;
  v314 = v299 | *(_DWORD *)(result + 176);
  v315 = v304 ^ *(_DWORD *)(result + 404) ^ v299 & v281;
  v316 = v270 & v281 ^ v304;
  v317 = v311 ^ (v197 | v146);
  v318 = (~v197 ^ v283) & v146;
  v319 = (v197 & v283 ^ v197 & v146) & v308 ^ (v197 | v146);
  v320 = v308 & ~(v283 & ~(v197 ^ v146) ^ v209);
  v321 = *(_DWORD *)(result + 24) & ~(v313 ^ v292);
  v322 = v310 ^ (v305 | *(_DWORD *)(result + 176));
  v323 = v283 & v141 ^ v146;
  v324 = v311 ^ v146;
  v325 = v323;
  v326 = v283 & v141 ^ v197;
  v327 = v317 & v308;
  v328 = v200 ^ v283;
  v329 = (v270 & v279 ^ *(_DWORD *)(result + 428)) & *(_DWORD *)(result + 24);
  v330 = v308 & ~v324 ^ v318;
  v331 = *(_DWORD *)(result + 412) ^ *(_DWORD *)(result + 108) ^ v307 & ~*(_DWORD *)(result + 680) ^ *(_DWORD *)(result + 128) & ~(v307 & ~*(_DWORD *)(result + 652) ^ *(_DWORD *)(result + 676));
  v332 = v328 ^ v319 & ~v273;
  v333 = (v326 ^ v320) & ~v273;
  v334 = ((v209 ^ v311) & v308 ^ v318) & ~v273;
  v335 = v324 & v308 ^ v209;
  v336 = v273 | v318 ^ v209 & v308;
  v337 = v322 ^ v321 ^ *(_DWORD *)(result + 208) & ~(v314 ^ v306 ^ *(_DWORD *)(result + 24) & ~v302);
  v338 = v306 ^ *(_DWORD *)(result + 20) ^ (v280 | *(_DWORD *)(result + 176)) ^ *(_DWORD *)(result + 24) & ~v315;
  v339 = *(_DWORD *)(result + 208) & ~(v315 & *(_DWORD *)(result + 24) ^ v316 ^ *(_DWORD *)(result + 144));
  v340 = v309 ^ *(_DWORD *)(result + 92) ^ v270 ^ v329 ^ (*(_DWORD *)(result + 24) & ~v312 ^ *(_DWORD *)(result + 144)) & *(_DWORD *)(result + 208);
  v341 = ~v273 & v308 & ~v325 ^ v324;
  v342 = v324 | v308;
  v343 = *(_DWORD *)(result + 52) ^ *(_DWORD *)(result + 732) ^ v307 & *(_DWORD *)(result + 640) ^ (*(_DWORD *)(result + 672) ^ v307 & ~*(_DWORD *)(result + 484)) & *(_DWORD *)(result + 128);
  v344 = v308 & ~v206;
  v345 = v331 & ~v301;
  *(_DWORD *)(result + 316) = v332 ^ v344;
  *(_DWORD *)(result + 404) = v335 ^ v333;
  *(_DWORD *)(result + 312) = v336 ^ v327 ^ v197 ^ v286;
  *(_DWORD *)(result + 516) = v337 & v116;
  *(_DWORD *)(result + 108) = v331;
  *(_DWORD *)(result + 648) = v330 ^ v334;
  *(_DWORD *)(result + 12) = v337;
  v346 = *(_DWORD *)(result + 592);
  v347 = v338 ^ v339;
  *(_DWORD *)(result + 20) = v338 ^ v339;
  *(_DWORD *)(result + 92) = v340;
  v348 = v128 & ~(v331 & ~v301);
  *(_DWORD *)(result + 32) = v307;
  *(_DWORD *)(result + 308) = v342 ^ v341;
  v349 = ~(v340 & v134);
  *(_DWORD *)(result + 52) = v343;
  v350 = v349 & v340;
  v351 = *(_DWORD *)(result + 252) | v346;
  v352 = *(_DWORD *)(result + 548);
  v353 = *(_DWORD *)(result + 552);
  *(_DWORD *)(result + 680) = v348;
  v354 = v340 & v126;
  v355 = *(_DWORD *)(result + 128) & ~(*(_DWORD *)(result + 636) & v307 ^ *(_DWORD *)(result + 556)) ^ *(_DWORD *)(result + 124) ^ v352 ^ v307 & ~v353;
  v356 = v201 & v126;
  v357 = v355 & v126;
  v358 = v355 & v134 ^ v134;
  v359 = v349 & v355;
  v360 = v201 & ~(v340 ^ v355 & v126);
  v361 = v355 & v126 ^ v134;
  v362 = v201 & v355 & v134;
  v363 = *(_DWORD *)(result + 164) ^ *(_DWORD *)(result + 724) ^ *(_DWORD *)(result + 432) & v307;
  v364 = (*(_DWORD *)(result + 424) & v307 ^ *(_DWORD *)(result + 716)) & *(_DWORD *)(result + 128);
  v365 = *(_DWORD *)(result + 580) ^ *(_DWORD *)(result + 232) ^ v351;
  v366 = *(_DWORD *)(result + 156) & ~(v46 & *(_DWORD *)(result + 600) ^ *(_DWORD *)(result + 460));
  v367 = v340 & v134 & v355;
  v368 = (v340 | v134) ^ v357;
  v369 = *(_DWORD *)(result + 112);
  *(_DWORD *)(result + 124) = v355;
  v370 = v363 ^ v364;
  v371 = v366 ^ v365;
  *(_DWORD *)(result + 428) = v355 | v294;
  *(_DWORD *)(result + 232) = v366 ^ v365;
  *(_DWORD *)(result + 376) = v340 & v134 ^ v201 & ~v358 ^ v357;
  *(_DWORD *)(result + 552) = v201 & v358 ^ v368;
  *(_DWORD *)(result + 580) = ~v340 & v355 & v201 ^ v340 ^ v134 ^ v355;
  *(_DWORD *)(result + 636) = v201 & v358 ^ (v340 | v134) ^ v367;
  *(_DWORD *)(result + 456) = v201 & ~v355 ^ v354 ^ v367;
  *(_DWORD *)(result + 596) = v360 ^ v359 ^ v340 ^ v134;
  *(_DWORD *)(result + 496) = v368 ^ v201 & ~v361;
  *(_DWORD *)(result + 692) = (v361 | v201) ^ v134;
  *(_DWORD *)(result + 556) = v355 & ~(v340 | v134) ^ v134 ^ v201 & ~(v350 ^ ~v340 & v355);
  *(_DWORD *)(result + 296) = (v355 ^ ~v340) & (v340 | v134) ^ v356;
  *(_DWORD *)(result + 656) = v201 & ~((v340 | v134) ^ v355 & v134) ^ v367;
  *(_DWORD *)(result + 744) = v367 ^ v362;
  *(_DWORD *)(result + 444) = v362 ^ (v340 | v134) ^ (v340 ^ v134) & v355;
  *(_DWORD *)(result + 480) = v201 ^ v134 ^ ~v340 & v355 & v134;
  *(_DWORD *)(result + 356) = (v340 | v134) & ~v201 ^ v355 & ~v350;
  v372 = *(_DWORD *)(result + 280);
  v373 = v277 & ~(v363 ^ v364);
  v374 = v52 & v60 ^ v79 ^ v244 ^ (v242 ^ (v52 | v369)) & v121;
  *(_DWORD *)(result + 700) = v373;
  v375 = (v366 ^ v365) & ~*(_DWORD *)(result + 488);
  v376 = *(_DWORD *)(result + 500) ^ v372;
  v377 = *(_DWORD *)(result + 476) & (v366 ^ v365);
  v378 = *(_DWORD *)(result + 84);
  v379 = (v366 ^ v365) & *(_DWORD *)(result + 628);
  *(_DWORD *)(result + 164) = v363 ^ v364;
  v380 = *(_DWORD *)(result + 228);
  *(_DWORD *)(result + 84) = v376 ^ v378 ^ v379;
  v381 = *(_DWORD *)(result + 140) ^ v374 ^ (v366 ^ v365) & ~(v246 ^ v247);
  v382 = *(_DWORD *)(result + 368) ^ v380 ^ v375;
  v383 = v377 ^ *(_DWORD *)(result + 384);
  v384 = v343 ^ *(_DWORD *)(result + 84);
  v385 = *(_DWORD *)(result + 84);
  *(_DWORD *)(result + 196) ^= v374 ^ (v246 ^ v247) & ~(v366 ^ v365);
  v386 = ~v300;
  v387 = v343 & ~v385;
  v388 = v343 & v385;
  v389 = v385 & ~v343;
  v390 = v300;
  v391 = v343 | v300;
  v392 = v382 ^ v383 & v221;
  v393 = v277 ^ v370;
  v394 = v277 | v370;
  v395 = *(_DWORD *)(result + 196) | v277;
  v396 = v277 & v370;
  v397 = *(_DWORD *)(result + 84) | v300;
  v398 = v381 | v204;
  *(_DWORD *)(result + 396) = v381 | v116;
  v399 = v384;
  v400 = ~v300 & v385;
  v401 = ~v204;
  v402 = v276 & v370;
  v403 = ~v300 & v343 ^ v399;
  v404 = v343 & ~v388;
  v405 = v387 ^ v400;
  v406 = ~v381 & v331;
  v407 = *(_DWORD *)(result + 196) | v370;
  v408 = *(_DWORD *)(result + 196);
  v409 = v277 ^ v370 ^ v395;
  v410 = ~v408 & v373;
  v411 = v403 & v347;
  v412 = v386 & (v343 | *(_DWORD *)(result + 84));
  v413 = *(_DWORD *)(result + 196) | v277 & v370;
  v414 = v343 & ~v388 | v390;
  v415 = *(_DWORD *)(result + 84) ^ v399 & v386;
  v416 = v389 & v386 ^ v388;
  v417 = v347 & ~(v389 ^ v397);
  v418 = v397 ^ v343;
  v419 = (v277 | v370) ^ (*(_DWORD *)(result + 196) | v277 | v370);
  v420 = ~v408 & v277;
  v421 = ~v408 & v402;
  v422 = v408 ^ v370 | v337;
  v423 = ~v408 & (v277 | v370) ^ v277 ^ v370;
  v424 = v277 & ~(v277 & v370) | *(_DWORD *)(result + 196);
  v425 = ~v337 & v277 ^ v373;
  v426 = v411 ^ v388 & ~v386;
  v427 = *(_DWORD *)(result + 396) ^ (v381 | v204);
  v428 = v404 ^ v412;
  v429 = v405 & v347 ^ v388;
  v430 = v388 ^ v391;
  v431 = v414 ^ v389;
  v432 = v412 ^ v389;
  v433 = v416 ^ v347 & ~(v399 ^ v391);
  v434 = v381 & ~v116;
  *(_DWORD *)(result + 736) = v381 & v116;
  v435 = v347 & v391;
  v436 = v417 ^ v418;
  v437 = v421 ^ v396;
  v438 = v424 ^ v396;
  v439 = v396 ^ v420;
  v440 = v420 ^ v370;
  v441 = v425 & v392;
  v442 = v426 | v196;
  v443 = v428 ^ v347 & ~v399;
  v444 = v429 & v203;
  v445 = v431 ^ v347 & ~v415;
  v446 = v406 & ~v301;
  v447 = v433 & v203;
  v448 = v432 ^ v347 & ~v430;
  v449 = v436 & v203;
  v450 = v418 ^ v435;
  v451 = (*(_DWORD *)(result + 196) | v393) ^ v402;
  v452 = v413 ^ v402;
  v453 = v370 ^ *(_DWORD *)(result + 144);
  v454 = v413 ^ v373 | v337;
  v455 = *(_DWORD *)(result + 56);
  v456 = v371 & *(_DWORD *)(result + 620);
  v457 = v419 ^ v373 & v392 & v337 ^ (v407 ^ v370) & v337;
  v458 = v410 & ~v337 ^ v407;
  v459 = v451 | v337;
  v460 = v337 & ~v440;
  v461 = v409 ^ *(_DWORD *)result;
  v462 = v437 & v337;
  v463 = v438 & ~v337;
  v464 = v452 ^ *(_DWORD *)(result + 72);
  v465 = v337 & ~v452 ^ v409;
  v466 = v434 & v337;
  *(_DWORD *)(result + 460) = v434 & ~v204;
  v467 = v427 & ~v337 ^ *(_DWORD *)(result + 460);
  v468 = (v381 ^ v116 ^ ~v204 & v116 | v337) ^ *(_DWORD *)(result + 460);
  v469 = ((v409 | v337) ^ v394) & v392;
  *(_DWORD *)(result + 732) = *(_DWORD *)(result + 196) ^ v373;
  v470 = v423 ^ v455;
  v471 = v458 ^ v441;
  v472 = (v381 ^ v116) & ~v204;
  v473 = (*(_DWORD *)(result + 736) | v204) ^ v381 ^ v116;
  v474 = *(_DWORD *)(result + 396) | v204;
  v475 = (v423 | v337) ^ v392 & ~v422;
  v476 = *(_DWORD *)(result + 396) & ~v116;
  v477 = v474 ^ v434 & v337;
  v478 = v371 & ~*(_DWORD *)(result + 668);
  v479 = *(_DWORD *)(result + 736) & v401;
  v480 = *(_DWORD *)(result + 188);
  v481 = v443 ^ v442;
  *(_DWORD *)(result + 156) = ~v381 & v116;
  *(_DWORD *)(result + 280) = ~v381 & v116 ^ v472;
  v482 = v445 ^ v444;
  v483 = v448 ^ v449;
  v484 = v450 ^ v447;
  v485 = *(_DWORD *)(result + 660);
  v486 = v480 ^ *(_DWORD *)(result + 420);
  *(_DWORD *)(result + 724) = v446 ^ (v381 | v331);
  v487 = v485 ^ v456;
  v488 = *(_DWORD *)(result + 724) ^ v128 & ~((v381 | v331) ^ v345) | v347;
  v489 = v308 & ~v457;
  v490 = v460 ^ v461;
  v491 = *(_DWORD *)(result + 196) ^ v393;
  *(_DWORD *)(result + 484) = v410 ^ v393;
  v492 = v371 & *(_DWORD *)(result + 704);
  v493 = v453 ^ v491 & ~v337;
  *(_DWORD *)(result + 716) = v381 & v331;
  v494 = v459 ^ v491;
  v495 = v473;
  v496 = v475 ^ v419;
  v497 = v479 ^ *(_DWORD *)(result + 396) ^ v427 & v337;
  *(_DWORD *)(result + 448) = v473 ^ v381 & v401 & v337;
  v498 = v464 ^ v463;
  v499 = v454 ^ v410 ^ v393 ^ v469;
  v500 = v439 & ~v337 ^ *(_DWORD *)(result + 732);
  v501 = v470 ^ v337 & ~v410;
  v502 = v381 & v401 ^ v116;
  v503 = v471 & v308;
  v504 = v476 ^ v479;
  *(_DWORD *)(result + 424) = (v381 | v331) & ~v381;
  v505 = v466 ^ *(_DWORD *)(result + 280);
  v506 = v466 ^ (v401 ^ v116) & v381;
  v507 = v481 ^ *(_DWORD *)(result + 208);
  v508 = v482 | v128;
  v509 = v484 ^ *(_DWORD *)(result + 192);
  v510 = v484 ^ *(_DWORD *)(result + 136);
  v511 = v482 & v128;
  v512 = v481 ^ *(_DWORD *)(result + 248);
  v513 = v486 ^ v478;
  v514 = v487 | *(_DWORD *)(result + 136);
  v515 = v381 & ~*(_DWORD *)(result + 716);
  v516 = v492 ^ *(_DWORD *)(result + 380);
  v517 = v467 & ~v392 ^ v497;
  v518 = *(_DWORD *)(result + 396) & v401;
  *(_DWORD *)(result + 488) = *(_DWORD *)(result + 156) & v401;
  *(_DWORD *)(result + 268) = v468 & ~v392 ^ *(_DWORD *)(result + 448);
  v519 = v493 ^ v489;
  v520 = v392 & ~v494;
  v521 = v498 ^ v465 & v392;
  v522 = v501 ^ v503;
  v523 = (v116 & ~*(_DWORD *)(result + 736) ^ v398) & v337;
  v524 = *(_DWORD *)(result + 268) ^ *(_DWORD *)(result + 152);
  v525 = *(_DWORD *)(result + 460) & v337 ^ *(_DWORD *)(result + 488) ^ *(_DWORD *)(result + 396);
  v526 = *(_DWORD *)(result + 424) | v301;
  *(_DWORD *)(result + 208) = v507 ^ v508;
  *(_DWORD *)(result + 248) = v512 ^ v511;
  *(_DWORD *)(result + 192) = v483 & ~v128 ^ v509;
  *(_DWORD *)(result + 640) = v128 & ~v483 ^ v510;
  *(_DWORD *)(result + 140) = v381;
  *(_DWORD *)(result + 188) = v513 ^ v514;
  *(_DWORD *)(result + 704) = v516 & v221;
  *(_DWORD *)(result + 228) = v392;
  *(_DWORD *)result = v496 & v308 ^ v490 ^ v392 & ~v462;
  *(_DWORD *)(result + 56) = v522 ^ v392 & ~v500;
  *(_DWORD *)(result + 144) = v519 ^ v520;
  *(_DWORD *)(result + 72) = v308 & ~v499 ^ v521;
  *(_DWORD *)(result + 256) = v381 & ~v301;
  *(_DWORD *)(result + 300) = ~v301 & (v381 | v331);
  *(_DWORD *)(result + 380) = v337 & ~v427;
  *(_DWORD *)(result + 440) = (v406 & v128 ^ v331 ^ v488) & v272;
  *(_DWORD *)(result + 600) = v446 & v128 ^ v345 | v347;
  *(_DWORD *)(result + 548) = ~v128 & (v331 ^ v301) ^ v446;
  *(_DWORD *)(result + 676) = v381 ^ v128 & ~(v331 ^ v301) ^ ~v301 & (v381 | v331) ^ (v515 ^ v348 | v347);
  *(_DWORD *)(result + 500) = (v406 ^ v301) & v128;
  *(_DWORD *)(result + 476) = v381 | v331;
  *(_DWORD *)(result + 652) = v128 & ~(v406 ^ v301);
  *(_DWORD *)(result + 368) = v518 ^ v381 ^ ~v392 & v477 ^ v337 & ~v504;
  *(_DWORD *)(result + 668) = v495;
  *(_DWORD *)(result + 592) = v116 ^ v477;
  *(_DWORD *)(result + 152) = v524 ^ v517 & ~v331;
  *(_DWORD *)(result + 432) = v526 ^ (v381 | v331);
  *(_DWORD *)(result + 420) = v525 | v392;
  *(_DWORD *)(result + 628) = v381 & v401 ^ v381 ^ v502 & v337 ^ ((v427 | v337) ^ v427) & ~v392 | v331;
  *(_DWORD *)(result + 136) = v523 ^ v502;
  *(_DWORD *)(result + 584) = ((v381 | v331) ^ (v331 | v301)) & v128;
  *(_DWORD *)(result + 620) = v128 & ~((v301 | v515) ^ v406);
  *(_DWORD *)(result + 384) = (v301 | v515) ^ (v381 | v331);
  *(_DWORD *)(result + 660) = ~v301 & (v381 | v331) ^ v406 ^ (v515 ^ v301) & v128;
  *(_DWORD *)(result + 412) = v128 | ~v301 & (v381 | v331) ^ (v381 | v331);
  *(_DWORD *)(result + 568) = v506 ^ v505 & ~v392 | v331;
  *(_DWORD *)(result + 672) = v398 ^ v381;
  return result;
}
