int __fastcall sub_87568(int result, int a2)
{
  int v2; // r3@1
  int v3; // ST114_4@1
  int v4; // r3@1
  int v5; // r4@1
  int v6; // ST4C_4@1
  int v7; // STFC_4@1
  int v8; // r3@1
  int v9; // ST118_4@1
  int v10; // r5@1
  int v11; // r4@1
  int v12; // ST04_4@1
  int v13; // r2@1
  int v14; // ST11C_4@1
  int v15; // r6@1
  int v16; // ST98_4@1
  int v17; // r3@1
  int v18; // ST120_4@1
  int v19; // ST10_4@1
  int v20; // r5@1
  int v21; // r6@1
  int v22; // STE4_4@1
  int v23; // r5@1
  int v24; // ST50_4@1
  int v25; // ST7C_4@1
  int v26; // ST88_4@1
  int v27; // r5@1
  int v28; // STE8_4@1
  int v29; // r7@1
  int v30; // ST8C_4@1
  int v31; // ST54_4@1
  int v32; // r7@1
  int v33; // r5@1
  int v34; // ST90_4@1
  int v35; // ST2C_4@1
  int v36; // r5@1
  int v37; // r3@1
  int v38; // ST34_4@1
  int v39; // ST78_4@1
  int v40; // r5@1
  int v41; // ST124_4@1
  int v42; // r8@1
  int v43; // r9@1
  int v44; // ST68_4@1
  int v45; // r4@1
  int v46; // ST128_4@1
  int v47; // r7@1
  int v48; // r5@1
  int v49; // STF4_4@1
  int v50; // r3@1
  int v51; // STF0_4@1
  int v52; // ST14C_4@1
  int v53; // STEC_4@1
  int v54; // lr@1
  int v55; // ST6C_4@1
  int v56; // r7@1
  int v57; // ST150_4@1
  int v58; // ST154_4@1
  int v59; // lr@1
  int v60; // STB8_4@1
  int v61; // STD4_4@1
  int v62; // r5@1
  int v63; // ST58_4@1
  int v64; // ST64_4@1
  int v65; // ST20_4@1
  int v66; // ST12C_4@1
  int v67; // r2@1
  int v68; // r12@1
  int v69; // ST9C_4@1
  int v70; // ST5C_4@1
  int v71; // STBC_4@1
  int v72; // ST48_4@1
  int v73; // ST30_4@1
  int v74; // STD8_4@1
  int v75; // ST110_4@1
  int v76; // ST08_4@1
  int v77; // ST40_4@1
  int v78; // ST74_4@1
  int v79; // ST14_4@1
  int v80; // STA4_4@1
  int v81; // r11@1
  int v82; // r6@1
  int v83; // STC0_4@1
  int v84; // ST84_4@1
  int v85; // STDC_4@1
  int v86; // ST184_4@1
  int v87; // r5@1
  int v88; // STD0_4@1
  int v89; // ST144_4@1
  int v90; // ST160_4@1
  int v91; // ST170_4@1
  int v92; // r3@1
  int v93; // ST178_4@1
  int v94; // ST10C_4@1
  int v95; // STAC_4@1
  int v96; // STF8_4@1
  int v97; // r7@1
  int v98; // ST15C_4@1
  int v99; // ST18_4@1
  int v100; // ST174_4@1
  int v101; // STC8_4@1
  int v102; // lr@1
  int v103; // ST80_4@1
  int v104; // ST24_4@1
  int v105; // STE0_4@1
  int v106; // r4@1
  int v107; // STA0_4@1
  int v108; // r5@1
  int v109; // ST19C_4@1
  int v110; // ST16C_4@1
  int v111; // r3@1
  int v112; // ST44_4@1
  int v113; // r3@1
  int v114; // r2@1
  int v115; // r7@1
  int v116; // ST108_4@1
  int v117; // r3@1
  int v118; // ST38_4@1
  int v119; // STC4_4@1
  int v120; // ST70_4@1
  int v121; // r3@1
  int v122; // ST94_4@1
  int v123; // r3@1
  int v124; // r10@1
  int v125; // r3@1
  int v126; // ST100_4@1
  int v127; // ST3C_4@1
  int v128; // r3@1
  int v129; // ST168_4@1
  int v130; // r3@1
  int v131; // r6@1
  int v132; // ST28_4@1
  int v133; // r3@1
  int v134; // ST130_4@1
  int v135; // r6@1
  int v136; // ST1C_4@1
  int v137; // ST134_4@1
  int v138; // STB4_4@1
  int v139; // r9@1
  int v140; // STCC_4@1
  int v141; // ST158_4@1
  int v142; // r2@1
  int v143; // r5@1
  int v144; // ST0C_4@1
  int v145; // r2@1
  int v146; // ST138_4@1
  int v147; // r7@1
  int v148; // STA8_4@1
  int v149; // r2@1
  int v150; // r8@1
  int v151; // r3@1
  int v152; // ST13C_4@1
  int v153; // r7@1
  int v154; // ST2C_4@1
  int v155; // ST140_4@1
  int v156; // r2@1
  int v157; // ST180_4@1
  int v158; // ST190_4@1
  int v159; // ST17C_4@1
  int v160; // r7@1
  int v161; // r4@1
  int v162; // ST30_4@1
  int v163; // ST188_4@1
  int v164; // ST18C_4@1
  int v165; // ST194_4@1
  int v166; // r12@1
  int v167; // ST84_4@1
  int v168; // ST164_4@1
  int v169; // r3@1
  int v170; // ST198_4@1
  int v171; // ST1B0_4@1
  int v172; // STAC_4@1
  int v173; // ST1B8_4@1
  int v174; // STD8_4@1
  int v175; // ST148_4@1
  int v176; // r11@1
  int v177; // r12@1
  int v178; // STB0_4@1
  int v179; // ST110_4@1
  int v180; // r4@1
  int v181; // ST40_4@1
  int v182; // ST144_4@1
  int v183; // ST74_4@1
  int v184; // lr@1
  int v185; // ST54_4@1
  int v186; // r12@1
  int v187; // ST1BC_4@1
  int v188; // r1@1
  int v189; // r6@1
  int v190; // r5@1
  int v191; // lr@1
  int v192; // r3@1
  int v193; // ST184_4@1
  int v194; // ST10C_4@1
  int v195; // ST170_4@1
  int v196; // ST164_4@1
  int v197; // lr@1
  int v198; // ST1AC_4@1
  int v199; // ST1A8_4@1
  int v200; // ST15C_4@1
  int v201; // STD0_4@1
  int v202; // ST48_4@1
  int v203; // ST60_4@1
  int v204; // r4@1
  int v205; // STA8_4@1
  int v206; // ST1B4_4@1
  int v207; // r11@1
  int v208; // r8@1
  int v209; // ST16C_4@1
  int v210; // ST98_4@1
  int v211; // ST1A4_4@1
  int v220; // ST168_4@1
  int v223; // r3@1
  int v224; // ST174_4@1
  int v225; // r9@1
  int v226; // r10@1
  int v227; // STC0_4@1
  int v228; // ST40_4@1
  int v229; // r1@1
  int v230; // r3@1
  int v231; // r11@1
  int v234; // ST58_4@1
  int v236; // r9@1
  int v237; // r1@1
  int v238; // r12@1
  int v239; // r9@1
  int v240; // ST13C_4@1
  int v241; // r11@1
  int v242; // r4@1
  int v243; // r5@1
  int v244; // ST158_4@1
  int v245; // lr@1
  int v246; // ST04_4@1
  int v247; // r6@1
  int v248; // r4@1
  int v249; // ST124_4@1
  int v250; // ST168_4@1
  int v251; // r3@1
  int v252; // ST1AC_4@1
  int v253; // r12@1
  int v254; // ST1B4_4@1
  int v255; // r10@1
  int v256; // ST114_4@1
  int v257; // ST198_4@1
  int v258; // r8@1
  int v259; // STE8_4@1
  int v260; // ST118_4@1
  int v261; // STA0_4@1
  int v262; // r9@1
  int v263; // STD8_4@1
  int v264; // STF4_4@1
  int v265; // ST90_4@1
  int v266; // lr@1
  int v267; // ST180_4@1
  int v268; // lr@1
  int v269; // r9@1
  int v270; // ST148_4@1
  int v271; // r6@1
  int v272; // r11@1
  int v273; // ST178_4@1
  int v274; // ST120_4@1
  int v275; // ST100_4@1
  int v276; // ST17C_4@1
  int v277; // ST40_4@1
  int v278; // r7@1
  int v279; // STEC_4@1
  int v280; // r6@1
  int v281; // ST9C_4@1
  int v282; // r8@1
  int v283; // r1@1
  int v284; // ST14C_4@1
  int v285; // STD0_4@1
  int v286; // ST150_4@1
  int v287; // STD4_4@1
  int v288; // ST64_4@1
  int v289; // STCC_4@1
  int v290; // STC8_4@1
  int v291; // r6@1
  int v292; // ST104_4@1
  int v293; // ST144_4@1
  int v294; // ST10C_4@1
  int v295; // ST38_4@1
  int v296; // STF0_4@1
  int v297; // STBC_4@1
  int v298; // r3@1
  int v299; // r7@1
  int v300; // ST100_4@1
  int v301; // ST68_4@1
  int v302; // r10@1
  int v303; // r2@1
  int v304; // STA8_4@1
  int v305; // r4@1
  int v306; // r12@1
  int v307; // ST7C_4@1
  int v308; // STA0_4@1
  int v309; // r8@1
  int v310; // ST28_4@1
  int v311; // ST60_4@1
  int v312; // r1@1
  int v313; // ST04_4@1
  int v314; // ST6C_4@1
  int v315; // ST54_4@1
  int v316; // r7@1
  int v317; // r10@1
  int v318; // lr@1
  int v319; // r3@1
  int v320; // STA0_4@1
  int v321; // r5@1
  int v322; // r8@1
  int v323; // r6@1
  int v324; // ST8C_4@1
  int v325; // r11@1
  int v326; // ST08_4@1
  int v327; // STC8_4@1
  int v328; // r12@1
  int v329; // ST84_4@1
  int v330; // STA8_4@1
  int v331; // ST5C_4@1
  int v332; // ST7C_4@1
  int v333; // lr@1
  int v334; // r11@1
  int v335; // STD8_4@1
  int v336; // r9@1
  int v337; // STA4_4@1
  int v338; // r4@1
  int v339; // r6@1
  int v340; // ST0C_4@1
  int v341; // ST10_4@1
  int v342; // ST48_4@1
  int v343; // r5@1
  int v344; // r2@1
  int v345; // STE8_4@1
  int v346; // ST114_4@1
  int v347; // ST80_4@1
  int v348; // r10@1
  int v349; // STBC_4@1
  int v350; // ST04_4@1
  int v351; // ST08_4@1
  int v352; // STC4_4@1
  int v353; // STCC_4@1
  int v354; // ST3C_4@1
  int v355; // STD0_4@1
  int v356; // lr@1
  int v357; // r11@1
  int v358; // STC8_4@1
  int v359; // ST98_4@1
  int v360; // r2@1
  int v361; // r1@1
  int v362; // r3@1
  int v363; // ST88_4@1
  int v364; // STA4_4@1
  int v365; // r6@1
  int v366; // STB0_4@1
  int v367; // lr@1
  int v368; // r3@1
  int v369; // ST94_4@1
  int v370; // r4@1
  int v371; // ST8C_4@1
  int v372; // STB4_4@1
  int v375; // r7@1
  int v377; // r12@1
  int v378; // STE0_4@1
  int v379; // STD0_4@1
  int v380; // ST7C_4@1
  int v381; // STDC_4@1
  int v382; // STE8_4@1
  int v383; // ST10_4@1
  int v384; // STD4_4@1
  int v385; // STCC_4@1
  int v386; // r8@1
  int v387; // STC8_4@1
  int v388; // lr@1
  int v389; // ST44_4@1
  int v390; // r5@1
  int v391; // ST110_4@1
  int v392; // r3@1
  int v393; // STBC_4@1
  int v394; // ST14_4@1
  int v395; // r4@1
  int v396; // ST10C_4@1
  int v397; // ST108_4@1
  int v398; // ST104_4@1
  int v399; // r7@1
  int v400; // r12@1
  int v401; // r7@1
  int v402; // r9@1
  int v403; // STE0_4@1
  int v404; // STF0_4@1
  int v405; // STE4_4@1
  int v406; // r8@1
  int v407; // STD0_4@1
  int v408; // STD8_4@1
  int v409; // ST100_4@1
  int v410; // STA8_4@1
  int v411; // STFC_4@1
  int v412; // STF4_4@1
  int v413; // STB0_4@1
  int v414; // ST94_4@1
  int v415; // lr@1
  int v416; // ST90_4@1
  int v417; // r3@1
  int v418; // STB4_4@1
  int v419; // ST70_4@1
  int v420; // STC8_4@1
  int v421; // ST0C_4@1
  int v422; // ST30_4@1
  int v423; // r2@1
  int v424; // r5@1
  int v425; // r6@1
  int v426; // r6@1
  int v427; // r9@1
  int v428; // r6@1
  int v429; // r9@1
  int v430; // r6@1
  int v431; // r9@1
  int v432; // r6@1
  int v433; // r9@1
  int v434; // r6@1
  int v435; // r9@1
  int v436; // r6@1
  int v437; // r6@1
  int v438; // r5@1
  int v439; // r12@1
  int v440; // r9@1
  int v441; // r6@1
  int v442; // ST5C_4@1
  int v443; // r5@1
  int v444; // r7@1
  int v445; // r7@1
  int v446; // r6@1
  int v447; // r9@1
  int v448; // r6@1
  int v449; // r9@1
  int v450; // r6@1
  int v451; // r4@1
  int v452; // r6@1
  int v453; // r12@1
  int v454; // r6@1
  int v455; // r8@1
  int v456; // r6@1
  int v457; // r6@1
  int v458; // r12@1
  int v459; // r6@1
  int v460; // r8@1
  int v461; // r1@1
  int v462; // r6@1
  int v463; // lr@1
  int v464; // r3@1
  int v465; // r4@1
  int v466; // r6@1
  int v467; // lr@1
  int v468; // r3@1
  int v469; // r6@1
  int v470; // ST0C_4@1
  int v471; // r8@1
  int v472; // r1@1
  int v473; // ST70_4@1
  int v474; // ST10_4@1
  int v475; // ST30_4@1
  int v476; // r3@1
  int v477; // r2@1
  int v478; // ST5C_4@1
  int v479; // r12@1
  int v480; // r6@1
  int v481; // ST28_4@1
  int v482; // ST58_4@1
  int v483; // r4@1
  int v484; // r7@1
  int v485; // ST20_4@1
  int v486; // ST0C_4@1
  int v487; // ST6C_4@1
  int v488; // ST3C_4@1
  int v489; // r8@1
  int v490; // ST44_4@1
  int v491; // ST54_4@1
  int v492; // r12@1
  int v493; // ST60_4@1
  int v494; // ST14_4@1
  int v495; // r1@1
  int v496; // ST68_4@1
  int v497; // r12@1
  int v498; // r8@1
  int v499; // r1@1
  int v500; // ST74_4@1
  int v501; // lr@1
  int v502; // ST50_4@1
  int v503; // ST38_4@1
  int v504; // ST34_4@1
  int v505; // ST48_4@1
  int v506; // ST24_4@1
  int v507; // r12@1
  int v508; // r7@1
  int v509; // ST78_4@1
  int v510; // ST64_4@1
  int v511; // r12@1
  int v512; // r4@1
  int v513; // r8@1
  int v514; // r1@1
  int v515; // ST4C_4@1
  int v516; // r9@1
  int v517; // ST44_4@1
  int v518; // r8@1
  int v519; // ST1C_4@1
  int v520; // r5@1
  int v521; // r1@1
  int v522; // r7@1
  int v523; // ST18_4@1
  int v524; // r9@1
  int v525; // r4@1
  int v526; // r8@1
  int v527; // ST2C_4@1
  int v528; // ST3C_4@1
  int v529; // r6@1
  int v530; // r4@1
  int v531; // r2@1
  int v532; // r11@1
  int v533; // r2@1
  int v534; // ST08_4@1
  int v535; // r11@1
  int v536; // r2@1
  int v537; // r11@1
  int v538; // r6@1
  int v539; // r1@1
  int v540; // ST40_4@1
  int v541; // ST28_4@1
  int v542; // r12@1
  int v543; // ST04_4@1
  int v544; // ST0C_4@1
  int v545; // lr@1
  int v546; // ST30_4@1
  int v547; // r4@1
  int v548; // r12@1
  int v549; // r6@1
  int v550; // r3@1
  int v551; // r11@1
  int v552; // ST20_4@1
  int v553; // r6@1
  int v554; // r5@1
  int v555; // r9@1
  int v556; // r5@1
  int v557; // r3@1
  int v558; // ST04_4@1
  int v559; // r5@1
  int v560; // r9@1
  int v561; // r7@1
  int v562; // r7@1
  int v563; // r7@1
  int v564; // r2@1
  int v565; // r2@1
  int v566; // r2@1
  int v567; // r2@1
  int v568; // r3@1

  v2 = *(_DWORD *)a2;
  *(_DWORD *)result = *(_DWORD *)a2;
  v3 = v2;
  v4 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 4) = v4;
  v5 = *(_DWORD *)(a2 + 8);
  v6 = v4;
  v7 = ~v4;
  *(_DWORD *)(result + 8) = v5;
  v8 = *(_DWORD *)(a2 + 12);
  v9 = v5;
  *(_DWORD *)(result + 12) = v8;
  v10 = *(_DWORD *)(a2 + 16);
  v11 = ~v8;
  v12 = v8;
  *(_DWORD *)(result + 16) = v10;
  v13 = *(_DWORD *)(a2 + 20);
  v14 = v10;
  *(_DWORD *)(result + 20) = v13;
  v15 = *(_DWORD *)(a2 + 24);
  v16 = ~v13;
  *(_DWORD *)(result + 24) = v15;
  v17 = *(_DWORD *)(a2 + 28);
  v18 = v15;
  *(_DWORD *)(result + 28) = v17;
  v19 = v17;
  *(_DWORD *)(result + 32) = *(_DWORD *)(a2 + 32);
  v20 = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(result + 36) = v20;
  v21 = v20;
  v22 = ~v20;
  *(_DWORD *)(result + 40) = *(_DWORD *)(a2 + 40);
  v23 = *(_DWORD *)(a2 + 44);
  v24 = v21;
  v25 = v11;
  *(_DWORD *)(result + 44) = v23;
  v26 = v23;
  *(_DWORD *)(result + 48) = *(_DWORD *)(a2 + 48);
  v27 = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(result + 52) = v27;
  v28 = ~v27;
  v29 = *(_DWORD *)(a2 + 56);
  v30 = v27;
  *(_DWORD *)(result + 56) = v29;
  v31 = v29;
  v32 = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(result + 60) = v32;
  v33 = *(_DWORD *)(a2 + 64);
  v34 = v32;
  *(_DWORD *)(result + 64) = v33;
  v35 = v33;
  v36 = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(result + 68) = v36;
  v37 = *(_DWORD *)(a2 + 72);
  v38 = v36;
  v39 = v36 ^ v21;
  *(_DWORD *)(result + 72) = v37;
  v40 = *(_DWORD *)(a2 + 76);
  v41 = v37;
  v42 = v40 ^ v12;
  *(_DWORD *)(result + 76) = v40;
  v43 = v40 & v12;
  v44 = v40;
  v45 = v11 & v40;
  v46 = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(result + 80) = v46;
  v47 = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(result + 84) = v47;
  v48 = v47 ^ v13;
  v49 = v13 & ~v47;
  v50 = *(_DWORD *)(a2 + 88);
  v51 = ~v13 & v47;
  v52 = v47 | v13;
  *(_DWORD *)(result + 88) = v50;
  v53 = v28 & (v47 ^ v13);
  v54 = v47 & v13;
  v55 = v47;
  v56 = *(_DWORD *)(a2 + 92);
  v57 = v54;
  v58 = v28 & v48 ^ v48;
  *(_DWORD *)(result + 92) = v56;
  v59 = *(_DWORD *)(a2 + 96);
  v60 = v48;
  v61 = ~v56;
  *(_DWORD *)(result + 96) = v59;
  v62 = *(_DWORD *)(a2 + 100);
  v63 = v56;
  v64 = v13;
  *(_DWORD *)(result + 100) = v62;
  v65 = v62;
  v66 = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(result + 104) = v66;
  v67 = *(_DWORD *)(a2 + 108);
  v68 = *(_DWORD *)(a2 + 108);
  *(_DWORD *)(result + 108) = v67;
  v69 = ~v67;
  v70 = v68 | v12;
  v71 = v67 & v12;
  v72 = *(_DWORD *)(a2 + 112);
  v73 = v45;
  v74 = v67 & v44 ^ v12;
  *(_DWORD *)(result + 112) = v72;
  v75 = v45 ^ (v68 | v12);
  v76 = *(_DWORD *)(a2 + 116);
  v77 = (v67 ^ v12) & v44 ^ v67 & v12;
  v78 = v67 & v44 ^ v67;
  v79 = v67;
  v80 = ~v67 & v12 ^ v67 & v44;
  v81 = v25 & v67;
  v82 = v12 & ~(v67 & v12);
  *(_DWORD *)(result + 116) = v76;
  v83 = v44 & ~v82;
  v84 = v82 ^ v44 & ~(v67 ^ v12);
  v85 = *(_DWORD *)(a2 + 120);
  *(_DWORD *)(result + 120) = v85;
  v86 = v50 ^ v76;
  v87 = *(_DWORD *)(a2 + 124);
  v88 = v19 & v87;
  v89 = v87 ^ v19;
  v90 = v67 & v44 ^ (v68 | v12);
  *(_DWORD *)(result + 124) = v87;
  v91 = v19 & v87 ^ ~v87;
  v92 = *(_DWORD *)(a2 + 128);
  v93 = ~v67 & v44 ^ v12 ^ v59;
  v94 = v83 ^ v82;
  *(_DWORD *)(result + 128) = v92;
  v95 = v42 & v67;
  v96 = ~v87;
  v97 = *(_DWORD *)(a2 + 132);
  v98 = v83 ^ v25 & v67;
  v99 = v87;
  v100 = ~v87 & v19 ^ v87;
  v101 = v25 & v97;
  *(_DWORD *)(result + 132) = v97;
  v102 = v97 & v12;
  v103 = v97 ^ v12;
  v104 = v97;
  v105 = *(_DWORD *)(a2 + 136);
  v106 = ~v97;
  v107 = ~v97 & v12;
  v108 = v67 ^ v12 ^ v43;
  v109 = v92 ^ v19;
  v110 = v25 & v67 & v44 ^ v67;
  *(_DWORD *)(result + 136) = v105;
  v111 = *(_DWORD *)(a2 + 140);
  *(_DWORD *)(result + 140) = v111;
  v112 = v111;
  v113 = *(_DWORD *)(a2 + 144);
  v114 = v113 ^ v97;
  *(_DWORD *)(result + 144) = v113;
  v115 = *(_DWORD *)(a2 + 148);
  *(_DWORD *)(result + 148) = v115;
  v116 = *(_DWORD *)(a2 + 152);
  *(_DWORD *)(result + 152) = v116;
  v117 = *(_DWORD *)(a2 + 156);
  v118 = v115;
  v119 = v106;
  *(_DWORD *)(result + 156) = v117;
  v120 = v117;
  *(_DWORD *)(result + 160) = *(_DWORD *)(a2 + 160);
  v121 = *(_DWORD *)(a2 + 164);
  *(_DWORD *)(result + 164) = v121;
  v122 = v121;
  v123 = *(_DWORD *)(a2 + 168);
  v124 = v123 ^ v79;
  *(_DWORD *)(result + 168) = v123;
  v125 = *(_DWORD *)(a2 + 172);
  v126 = ~v115;
  *(_DWORD *)(result + 172) = v125;
  v127 = v125;
  v128 = *(_DWORD *)(a2 + 176);
  v129 = v108 ^ v128;
  *(_DWORD *)(result + 176) = v128;
  v130 = *(_DWORD *)(a2 + 180);
  *(_DWORD *)(result + 180) = v130;
  v131 = *(_DWORD *)(a2 + 184);
  v132 = v130;
  *(_DWORD *)(result + 184) = v131;
  v133 = *(_DWORD *)(a2 + 188);
  v134 = v131;
  *(_DWORD *)(result + 188) = v133;
  v135 = *(_DWORD *)(a2 + 192);
  v136 = v133;
  *(_DWORD *)(result + 192) = v135;
  v137 = v135;
  v138 = *(_DWORD *)(a2 + 196);
  *(_DWORD *)(result + 196) = v138;
  v139 = *(_DWORD *)(a2 + 200);
  v140 = v102 & v138;
  v141 = v114 ^ v102 & v138;
  *(_DWORD *)(result + 200) = v139;
  v142 = *(_DWORD *)(a2 + 204);
  *(_DWORD *)(result + 204) = v142;
  v143 = (v138 ^ v106) & v12;
  v144 = v142;
  v145 = *(_DWORD *)(a2 + 208);
  *(_DWORD *)(result + 208) = v145;
  v146 = v145;
  v147 = *(_DWORD *)(a2 + 212);
  *(_DWORD *)(result + 212) = v147;
  v148 = v147;
  v149 = *(_DWORD *)(a2 + 216);
  v150 = v147 ^ v35;
  *(_DWORD *)(result + 216) = v149;
  v151 = *(_DWORD *)(a2 + 220);
  v152 = v149;
  *(_DWORD *)(result + 220) = v151;
  v153 = *(_DWORD *)(a2 + 224);
  v154 = v151;
  *(_DWORD *)(result + 224) = v153;
  v155 = v153;
  v156 = *(_DWORD *)(a2 + 228);
  *(_DWORD *)(result + 228) = v156;
  v157 = v74 & v156 ^ v77;
  v158 = v75 & v156 ^ v81;
  *(_DWORD *)(result + 232) = *(_DWORD *)(a2 + 232);
  v159 = v80 & v156 ^ v78;
  v160 = *(_DWORD *)(a2 + 236);
  v161 = v73;
  *(_DWORD *)(result + 236) = v160;
  v162 = v160;
  v163 = v124 ^ v156 ^ v161;
  v164 = v78 & v156 ^ v12;
  v165 = v156 & ~v84 ^ v77;
  v166 = v132 & ~(v126 & v132);
  *(_DWORD *)(result + 240) = *(_DWORD *)(a2 + 240);
  v167 = v16 & v127;
  v168 = (v83 ^ v12) & v156 ^ v95;
  v169 = *(_DWORD *)(a2 + 244);
  v170 = (v143 | v156) ^ v31;
  v171 = v150 ^ v166;
  v172 = v148 | v132;
  v173 = (v166 ^ (v148 | v132)) & v76;
  v174 = v96 & v169;
  *(_DWORD *)(result + 244) = v169;
  v175 = v169 | v99;
  v176 = ~v169 & v19;
  v177 = v169 & v120 & v89 ^ (v169 | v99) & v19;
  v178 = ~v169;
  v179 = v169 ^ v99;
  v180 = *(_DWORD *)(a2 + 248);
  v181 = ~v169 & v99;
  *(_DWORD *)(result + 248) = v180;
  v182 = v180;
  v183 = *(_DWORD *)(a2 + 252);
  v184 = v96 & v169 ^ v176 ^ v139 ^ v34 & ~v177 ^ (v19 & ~v181 ^ v169 | v63);
  v185 = v169;
  v186 = v19 & ~(v169 ^ v99) ^ v99;
  v187 = v86 ^ v169;
  v188 = v169 & v19;
  v189 = v91 & v169;
  v190 = v181 ^ v169 & v19;
  *(_DWORD *)(result + 200) = v184 ^ v120 & ~((v19 & ~v174 ^ v174 | v63) ^ v186);
  v191 = v169 ^ v72;
  v192 = v94;
  v193 = v168 | v112;
  v194 = v156 & ~v94;
  v195 = v69 & v12 & v156 ^ v12;
  v196 = v98 & v156;
  v197 = v191 ^ v88;
  v198 = v176 ^ v185;
  v199 = (~v127 ^ v144) & v64;
  v200 = v192 ^ v156 & ~(v44 & ~v70 ^ v70 & v25) ^ v116;
  v201 = v16 & v144;
  v202 = ~v127 & v64;
  v203 = ~v148;
  *(_DWORD *)(result + 532) = v132 ^ v118;
  v204 = v148;
  v205 = v148 | v118;
  v206 = ((v126 & v132 | v204) ^ v118) & ~v76;
  v207 = v110 ^ v194;
  v208 = (v16 ^ v144) & v127;
  v209 = v129 ^ v83 & v156;
  v210 = v127 & v64;
  v211 = v208;
  *(_DWORD *)(result + 112) = v197 ^ (v181 | v63) ^ (v100 ^ v120 & v19 & ~v175) & v34 ^ v120 & ~(v186 ^ v190 & v61);
  _R5 = v181 & v19;
  _R8 = v99;
  _R7 = v181;
  __asm { ORN.W           R7, R7, R8 }
  v220 = _R7 & v19;
  _R7 = v63;
  __asm { ORN.W           R8, R7, R5 }
  v223 = v109 ^ v181 ^ (v179 ^ v188) & v61 ^ _R8 & v120;
  v224 = v207 | v112;
  v225 = v188 & v61 ^ v181 ^ v181 & v19 & v120;
  v226 = v120 & ~(v198 ^ (v181 & v19 ^ v185) & v61);
  v227 = ~v65 & v38;
  v228 = v12 & v138;
  v229 = (v19 ^ v185 | v63) ^ v174 ^ ((v179 ^ v19 | v63) ^ v189) & v120;
  *(_DWORD *)(result + 128) = v223 ^ v34 & ~v225;
  v230 = v156 & ~(v25 & v138 ^ v107);
  v231 = v179 ^ v19 ^ v152 ^ (v174 | v63) ^ v226;
  _R6 = v107;
  _R4 = v12;
  v234 = v34 & ~(v220 ^ v229);
  __asm { ORN.W           R1, R6, R4 }
  v236 = _R1 & v156;
  v237 = _R1 & v138;
  v238 = v230 ^ v12 ^ v237 ^ (v119 & v138 ^ v101 ^ v236) & v65 | v122;
  *(_DWORD *)(result + 216) = v231 ^ v234;
  v239 = v138 & ~(v104 | v12);
  *(_DWORD *)(result + 144) = v141 ^ (v107 ^ v138) & v156 ^ v65 & ~(v103 & v138 ^ v101 ^ v230) ^ v238;
  *(_DWORD *)(result + 252) = v183;
  v240 = v65 & ~(v237 ^ v107);
  v241 = v65 & ~(v140 ^ v103 ^ (v12 ^ v12 & v138) & v156);
  *(_DWORD *)(result + 56) = (v239 ^ v107 ^ v230) & v65 ^ v170 ^ v237 ^ v103 ^ ((v103 | v156) ^ v140 ^ v65 & ~(v101 & v138 ^ v156 & ~v103 ^ v103)) & ~v122;
  v242 = v12 & v138 ^ (v104 | v12);
  v243 = v156 & ~(v12 & v138 ^ v103) ^ v107 ^ v138 & v107;
  v244 = v156 & ~((v104 | v12) & v138 ^ v107) ^ v140;
  v245 = v156 & ~v242 ^ v41;
  v246 = v201 ^ v127;
  v247 = v138 & v107 ^ v242 & v156;
  v248 = v203 & v132 ^ *(_DWORD *)(result + 532);
  v249 = v247 ^ v103;
  v250 = v243 & v65;
  v251 = v203 & v118 ^ v126 & v132;
  v252 = v126 & v132 & v203 ^ v126 & v132;
  v253 = v206 ^ v251;
  v254 = v187 ^ v251;
  v255 = v118 & ~v132;
  v256 = v228 ^ v103 ^ v3 ^ v156 & ~v239;
  v257 = v255 ^ v9 ^ v126 & v132 & v203;
  v258 = (v55 ^ (v60 | v118)) & v28;
  v259 = v60 ^ v118;
  v260 = v241 ^ v156 & ~v101 | v122;
  v261 = v49 & v126;
  v262 = ((v49 | v118) ^ v55 | v30) ^ v49 ^ v76 & ~(v51 & ~v126 ^ v53);
  v263 = v76 & ~(v58 ^ v49 & v126);
  v264 = v245 ^ v237 ^ v103;
  v265 = v262;
  v266 = v159 ^ v157 & ~v112 | v26;
  v267 = (v205 ^ (v248 | v76)) & v178;
  v268 = v93 ^ v266;
  v269 = v132 | v118;
  v270 = ((v127 ^ v64) & v144 ^ v127) & v69 ^ v202 & v144 ^ v167 ^ v162 & ~((v167 ^ v144 | v79) ^ v202) | v112;
  v271 = (v248 & v76 ^ (v132 | v118)) & v178 ^ (v126 & v132 & v203 ^ v118) & v76 ^ v171;
  v272 = (v202 & v144 ^ v127 & v64) & v79;
  v273 = (v205 ^ v132) & v76;
  v274 = (v127 & v64 ^ v144) & v69 ^ v18 ^ v167 & v144 ^ v202;
  v275 = v268 ^ v194;
  v276 = v76 & ~v205 ^ v172 | v185;
  v277 = (v158 & ~v112 ^ v164) & ~v26 ^ v163 ^ v165 & ~v112;
  v278 = (v127 ^ v64 ^ v144 & v64) & v79;
  v279 = (v127 | v64) & v144;
  *(_DWORD *)(result + 64) = v271 ^ v19 & ~(v253 ^ (v173 ^ v255 | v185));
  v280 = v258 ^ (v51 | v118);
  v281 = (v51 | v118) ^ v52 ^ (v60 ^ (v60 | v118) | v30) ^ (v258 ^ v55) & v76;
  v282 = (v51 | v118) ^ v57;
  v283 = (v144 & v64 ^ v167) & v79 ^ v201 ^ v202;
  v284 = v79 & ~v201;
  v285 = v280 & v76;
  v286 = v281 ^ v182;
  v287 = v55 & ~v51 ^ v261;
  v288 = ~v65 & v39;
  v289 = v282 | v30;
  v290 = (v51 | v118) ^ v55;
  *(_DWORD *)(result + 528) = v132 & v118;
  v291 = v118 & v76;
  v292 = v278 ^ v246;
  v293 = v283 & v162;
  v294 = v272 ^ v199;
  v295 = (v38 | v24 | v65) ^ v38 & v24;
  *(_DWORD *)(result + 96) = v275 ^ v193;
  v296 = v71 & ~v156;
  v297 = v71 & v44 ^ v70;
  v298 = (v44 ^ v79) & v25 & v156;
  v299 = v255 & v203;
  v300 = v255 & v76 ^ v203 & v132;
  v301 = v156 | v112 | v90;
  v302 = v203 & *(_DWORD *)(result + 528) ^ *(_DWORD *)(result + 532);
  v303 = v205;
  v304 = v291 & (v203 ^ v132);
  v305 = v132 & v76 ^ v269 ^ v303;
  v306 = v202 ^ v144 ^ v246 & v79;
  v307 = v274 ^ v162 & ~(v79 & ~v246 ^ v167 & v144 ^ v202);
  v308 = v299 ^ v132;
  v309 = *(_DWORD *)(result + 532) ^ v303 ^ v14 ^ v269 & v76 ^ (v172 ^ v132 ^ v273 | v185);
  v310 = v24 & ~v65;
  v311 = v24 & ~v65 ^ v38;
  *(_DWORD *)(result + 340) = (v65 | v38) ^ v39 ^ (v288 ^ v38) & v104;
  v312 = ((v38 | v24) & v22 ^ (v65 | v38) ^ (v227 ^ v39) & v104) & v183 ^ *(_DWORD *)(result + 340);
  v313 = v210 & v144;
  v314 = (v288 ^ v24) & v119;
  v315 = v7 & v99;
  *(_DWORD *)(result + 16) = v309 ^ (v299 & ~v76 ^ v276) & v19;
  v316 = v210 & v144 & v79;
  v317 = v252 ^ v302 & v76 ^ v300 & v178;
  v318 = v76 & ~v308;
  *(_DWORD *)(result + 24) = v307 ^ v270;
  v319 = v298 ^ v301 ^ v70;
  v320 = v279 ^ v202;
  *(_DWORD *)(result + 248) = v286 ^ (v265 | v162);
  v321 = v287 | v30;
  v322 = v290 ^ v289;
  v323 = (v304 ^ v172) & v178;
  v324 = ~v167;
  v325 = ~v167 & v127;
  *(_DWORD *)(result + 88) = v19 & ~(v305 ^ v267) ^ v254;
  *(_DWORD *)(result + 328) = v311 ^ v104;
  *(_DWORD *)(result + 324) = *(_DWORD *)(result + 328) ^ v183 & ~(v38 & v24 & v65 & v119 ^ v227 ^ v39);
  *(_DWORD *)(result + 264) = (v312 | v6) ^ *(_DWORD *)(result + 324);
  v326 = v256 ^ v260;
  v327 = v202 & v144 ^ v167 ^ v284 ^ v134;
  v328 = (v144 & ~v202 ^ v202) & v79 ^ v202 ^ v162 & ~v306;
  v329 = v259 ^ v285 ^ v321;
  v330 = ~*(_DWORD *)(result + 64);
  v331 = v330 & *(_DWORD *)(result + 248);
  v332 = v322 ^ v263;
  v333 = v257 ^ v318 ^ v323;
  v334 = v325 ^ v144 & ~v202;
  v335 = v19 & ~v317;
  v336 = ~*(_DWORD *)(result + 24);
  v337 = (v144 & v127 ^ v210) & v79;
  v338 = (v196 ^ v297) & ~v112;
  v339 = *(_DWORD *)(result + 88);
  v340 = *(_DWORD *)(result + 88) | *(_DWORD *)(result + 24);
  v341 = v336 & v339;
  v342 = v339 & *(_DWORD *)(result + 24);
  v343 = v313 ^ v127;
  v344 = *(_DWORD *)(result + 96);
  *(_DWORD *)(result + 372) = *(_DWORD *)(result + 64) | *(_DWORD *)(result + 248);
  v345 = v344 | *(_DWORD *)(result + 248);
  v346 = *(_DWORD *)(result + 328) ^ v85;
  v347 = v7 & v136;
  v348 = *(_DWORD *)(result + 264) ^ v66;
  v349 = v250 ^ v249 | v122;
  v350 = v326 ^ v240;
  v351 = ~*(_DWORD *)(result + 96);
  v352 = v195 & ~v112 ^ v296 | v26;
  v353 = v327 ^ v320 & v162;
  v354 = *(_DWORD *)(result + 248) & ~v331;
  *(_DWORD *)(result + 8) = v333 ^ v335;
  v355 = v329 ^ v105;
  v356 = v334 ^ v337;
  v357 = (v319 | v26) ^ v200 ^ v338;
  v358 = v356;
  v359 = v340 & v336;
  v360 = v336 & *(_DWORD *)(result + 56);
  v361 = *(_DWORD *)(result + 24) & ~v342;
  v362 = *(_DWORD *)(result + 56);
  v363 = *(_DWORD *)(result + 24) & v362;
  v364 = v336 & v339 & v362;
  v365 = *(_DWORD *)(result + 372);
  v366 = *(_DWORD *)(result + 88) ^ *(_DWORD *)(result + 24);
  v367 = ~*(_DWORD *)(result + 88);
  v368 = *(_DWORD *)(result + 56);
  *(_DWORD *)(result + 224) = v162 & ~v316 ^ v155 ^ v292 ^ (v293 ^ v294 | v112);
  v369 = v367 & v368;
  v370 = v324;
  v371 = v365 | *(_DWORD *)(result + 96);
  v372 = *(_DWORD *)(result + 64) & ~*(_DWORD *)(result + 248);
  _R9 = *(_DWORD *)(result + 248);
  _R6 = v351;
  v375 = _R9 ^ v345;
  __asm { ORN.W           R9, R6, R9 }
  *(_DWORD *)(result + 392) = v331 & v351;
  *(_DWORD *)(result + 72) = v264 ^ v65 & ~v244 ^ v349;
  *(_DWORD *)(result + 184) = v353 ^ (v328 | v112);
  v377 = v354 ^ *(_DWORD *)(result + 96);
  v378 = *(_DWORD *)(result + 64) & v351;
  *(_DWORD *)(result + 136) = v355 ^ v162 & ~v332;
  v379 = v332 & ~v162;
  v380 = v360 ^ *(_DWORD *)(result + 88);
  v381 = v341 ^ v360;
  v382 = v342 ^ *(_DWORD *)(result + 56);
  v383 = v341 ^ v363;
  v384 = v367 & *(_DWORD *)(result + 24);
  v385 = v343 & v79 ^ v211;
  v386 = (v364 ^ *(_DWORD *)(result + 88)) & v357;
  v387 = v358 | v112;
  v388 = v340 & *(_DWORD *)(result + 56);
  v389 = _R9 & v350;
  v390 = v46 ^ v320 ^ v370 & v79;
  v391 = v350 & ~v375;
  v392 = *(_DWORD *)(result + 56);
  v393 = v22 & ~v65;
  v394 = ~*(_DWORD *)(result + 144);
  v395 = ~(v7 & v99);
  *(_DWORD *)(result + 464) = v394 & *(_DWORD *)(result + 112);
  *(_DWORD *)(result + 176) = v209 ^ v352 ^ v224;
  v396 = v377 & ~v350;
  v397 = v330 & v350;
  v398 = v378 ^ *(_DWORD *)(result + 248);
  v399 = *(_DWORD *)(result + 144);
  *(_DWORD *)(result + 316) = v350 & ~*(_DWORD *)(result + 184);
  v400 = v399 ^ *(_DWORD *)(result + 112);
  v401 = *(_DWORD *)(result + 72);
  *(_DWORD *)(result + 376) = v400;
  *(_DWORD *)(result + 516) = v401 & ~*(_DWORD *)(result + 136);
  v402 = v329 ^ v379;
  v403 = v386;
  v404 = ~v359 & *(_DWORD *)(result + 56);
  v405 = v361 ^ v360 | v357;
  v406 = v388 ^ *(_DWORD *)(result + 24);
  v407 = v360 ^ v340;
  v408 = v360 & v357;
  v409 = v392 & v357 & v366;
  v410 = v265 & v162;
  v411 = (v369 ^ v366) & v357;
  v412 = v369 ^ *(_DWORD *)(result + 88);
  v413 = v384 ^ *(_DWORD *)(result + 56);
  v414 = v162 & ~v385;
  v415 = v372 | *(_DWORD *)(result + 96);
  v416 = v390 ^ v387;
  v417 = *(_DWORD *)(result + 372) & v351 ^ v372;
  v418 = v350 & ~(*(_DWORD *)(result + 64) ^ v371);
  v419 = *(_DWORD *)(result + 372) ^ v371;
  *(_DWORD *)(result + 536) = *(_DWORD *)(result + 96) ^ *(_DWORD *)(result + 248);
  v420 = *(_DWORD *)(result + 372) ^ v391;
  v421 = v99 & v395;
  v422 = v6 ^ v395 & v136;
  *(_DWORD *)(result + 432) = *(_DWORD *)(result + 96) ^ v351 & v350;
  v423 = v351 & v350 ^ *(_DWORD *)(result + 372);
  v424 = *(_DWORD *)(result + 144);
  *(_DWORD *)(result + 496) = *(_DWORD *)(result + 112) & ~*(_DWORD *)(result + 464);
  *(_DWORD *)(result + 400) = *(_DWORD *)(result + 176) | v424;
  *(_DWORD *)(result + 720) = ~v350 & *(_DWORD *)(result + 184);
  *(_DWORD *)(result + 724) = v398 ^ v397;
  v425 = *(_DWORD *)(result + 316);
  *(_DWORD *)(result + 192) = v402 ^ v137;
  *(_DWORD *)(result + 712) = v350 & ~v425;
  v426 = *(_DWORD *)(result + 184);
  *(_DWORD *)(result + 296) = *(_DWORD *)(result + 184) | v350;
  v427 = v426 ^ v350;
  v428 = *(_DWORD *)(result + 184);
  *(_DWORD *)(result + 684) = v427;
  v429 = v428 & v350;
  v430 = *(_DWORD *)(result + 136);
  *(_DWORD *)(result + 688) = v429;
  v431 = v430 | *(_DWORD *)(result + 72);
  v432 = *(_DWORD *)(result + 144);
  *(_DWORD *)(result + 700) = v431;
  v433 = v432 | *(_DWORD *)(result + 112);
  v434 = *(_DWORD *)(result + 144);
  *(_DWORD *)(result + 256) = v433;
  v435 = v434 & ~*(_DWORD *)(result + 112);
  v436 = *(_DWORD *)(result + 144);
  *(_DWORD *)(result + 504) = v435;
  *(_DWORD *)(result + 396) = v436 & *(_DWORD *)(result + 112);
  v437 = *(_DWORD *)(result + 96);
  v438 = v354 | v437;
  *(_DWORD *)(result + 544) = v380 & v357 ^ *(_DWORD *)(result + 88);
  *(_DWORD *)(result + 436) = ~v359 & v357 ^ v380;
  *(_DWORD *)(result + 696) = v361 ^ v357 ^ v404;
  v439 = v331 | v437;
  v440 = (v354 | v437) ^ v331;
  v441 = *(_DWORD *)(result + 392);
  *(_DWORD *)(result + 576) = v440;
  *(_DWORD *)(result + 692) = v405 ^ v359;
  v442 = v438;
  v443 = v350 & ~(v441 ^ *(_DWORD *)(result + 64));
  v444 = *(_DWORD *)(result + 64);
  *(_DWORD *)(result + 308) = v381 & ~v357 ^ v383;
  *(_DWORD *)(result + 388) = v364 ^ v342;
  v445 = (v444 ^ *(_DWORD *)(result + 248)) & ~v351;
  *(_DWORD *)(result + 416) = v406 ^ v403;
  *(_DWORD *)(result + 312) = v357 & ~v407;
  v446 = *(_DWORD *)(result + 24);
  *(_DWORD *)(result + 508) = v383 ^ v408;
  v447 = v446 & ~v357;
  v448 = *(_DWORD *)(result + 88);
  *(_DWORD *)(result + 276) = v447 ^ v363;
  v449 = v363 ^ v448;
  v450 = *(_DWORD *)(result + 64);
  *(_DWORD *)(result + 632) = v383 & v357 ^ v449;
  v451 = *(_DWORD *)(result + 248);
  *(_DWORD *)(result + 408) = ~v357 & v382 ^ v449;
  *(_DWORD *)(result + 468) = v409 ^ v449;
  *(_DWORD *)(result + 664) = v439 ^ v450 & v451;
  *(_DWORD *)(result + 624) = v450 & v451;
  v452 = *(_DWORD *)(result + 64);
  *(_DWORD *)(result + 208) = v281 ^ v146 ^ v410;
  v453 = v452 & ~v350;
  v454 = *(_DWORD *)(result + 16);
  *(_DWORD *)(result + 520) = v412 ^ v411;
  *(_DWORD *)(result + 480) = v413 & v357;
  v455 = v394 & v454;
  v456 = *(_DWORD *)(result + 376);
  *(_DWORD *)(result + 736) = v455;
  *(_DWORD *)(result + 428) = v456 | *(_DWORD *)(result + 176);
  *(_DWORD *)(result + 80) = v416 ^ v414;
  v457 = *(_DWORD *)(result + 96);
  *(_DWORD *)(result + 424) = v423 ^ v415;
  v458 = v453 ^ v457;
  v459 = *(_DWORD *)(result + 248);
  *(_DWORD *)(result + 732) = v458;
  v460 = v459;
  *(_DWORD *)(result + 672) = v418 ^ v459;
  v461 = *(_DWORD *)(result + 536);
  *(_DWORD *)(result + 676) = v419 & ~v350;
  *(_DWORD *)(result + 680) = v396 ^ *(_DWORD *)(result + 536);
  v462 = *(_DWORD *)(result + 536);
  *(_DWORD *)(result + 548) = v389 ^ v415 ^ v354;
  *(_DWORD *)(result + 484) = v389 ^ v460;
  *(_DWORD *)(result + 636) = v417 ^ v389;
  v463 = v417 ^ (v461 | v350);
  v464 = *(_DWORD *)(result + 372) & v350;
  v465 = v350 & ~v462;
  v466 = *(_DWORD *)(result + 576);
  *(_DWORD *)(result + 552) = v463;
  *(_DWORD *)(result + 412) = v420 ^ v442;
  v467 = v466 ^ v464;
  v468 = *(_DWORD *)(result + 664);
  *(_DWORD *)(result + 716) = v467;
  *(_DWORD *)(result + 556) = v445 ^ v443;
  *(_DWORD *)(result + 652) = v468 ^ v465;
  *(_DWORD *)(result + 332) = v311 & v104 ^ v39 ^ (v38 & v24 | v65);
  *(_DWORD *)(result + 348) = v393 & v38 ^ v104 & ~v288;
  v469 = v421;
  *(_DWORD *)(result + 120) = ((v65 | v24) ^ v39 ^ v295 & v104) & ~v183 ^ v346 ^ ((v314 ^ v65 ^ v24) & ~v183 ^ *(_DWORD *)(result + 340) | v6);
  v470 = v136 & ~v421;
  v471 = v154 & ~(v470 ^ v469);
  v472 = v422;
  v473 = v154 & ~(v315 & v136 ^ v99) ^ v422 | v183;
  v474 = *(_DWORD *)(result + 200) | v277;
  v475 = v277 | *(_DWORD *)(result + 16);
  *(_DWORD *)(result + 352) = v104 & ~v311 ^ v24;
  v476 = v99 & v6;
  v477 = v96 & v6;
  v478 = v136 & v96 ^ v6;
  v479 = v104 & ~v310;
  v480 = v99 | v6;
  *(_DWORD *)(result + 272) = v314 ^ v310;
  v481 = v470 ^ (v99 | v6);
  *(_DWORD *)(result + 360) = (v227 ^ v38) & v104 ^ v65 ^ v24;
  v482 = ((v99 ^ v6) & v136 ^ v96 & v6) & v154;
  *(_DWORD *)(result + 356) = v104 & ~v295 ^ v295;
  *(_DWORD *)(result + 260) = v38 & ~v104;
  v483 = *(_DWORD *)(result + 200);
  v484 = v277 & ~v483;
  v485 = *(_DWORD *)(result + 200) ^ v277;
  v486 = *(_DWORD *)(result + 200) & ~v277;
  *(_DWORD *)(result + 268) = v479 ^ v38;
  *(_DWORD *)(result + 152) = v357;
  v487 = (v471 ^ v347 ^ v6) & ~v183;
  *(_DWORD *)result = v350;
  v488 = v136 & v99 & v6;
  v489 = v488 ^ v315;
  *(_DWORD *)(result + 572) = v347 ^ v6;
  v490 = v136 & ~(v99 ^ v6);
  v491 = (v136 & ~(v99 | v6) ^ v99 ^ v6) & v154;
  v492 = v472 ^ v154 & ~(v99 & v6);
  v493 = v489 & ~v154;
  v494 = v136 & v99;
  v495 = *(_DWORD *)(result + 16);
  *(_DWORD *)(result + 472) = v492;
  v496 = (v96 & v6 & v136 ^ v99 & v6) & v154;
  v497 = v277 & ~v484 | v495;
  v498 = v495;
  v499 = *(_DWORD *)(result + 200);
  v500 = (v474 ^ v475) & v348 ^ v483 ^ v497;
  v501 = ~v498;
  v502 = v486 | v498;
  *(_DWORD *)(result + 168) = v277;
  v503 = v474 | v498;
  v504 = v499 | v498;
  v505 = v485 & ~v498 ^ v277;
  v506 = (v484 | v498) ^ v277;
  v507 = v485 & ~v498 ^ v484 | v348;
  v508 = v347 ^ v99 & v6;
  v509 = v507;
  *(_DWORD *)(result + 728) = v172;
  v510 = v347 ^ v96 & v6;
  v511 = v490 ^ v6;
  *(_DWORD *)(result + 616) = v136 & v6;
  v512 = v490 ^ v96 & v6;
  *(_DWORD *)(result + 448) = v96 & v6 & v154 ^ v136 & v6;
  v513 = v99 | v6 | v154;
  *(_DWORD *)(result + 604) = v481;
  v514 = v136;
  v515 = v508 & v154;
  v516 = v480 & v136 ^ v99;
  *(_DWORD *)(result + 440) = v508 ^ v513;
  v517 = v136 & ~v477;
  v518 = v488 ^ v99;
  v519 = v99 ^ v136;
  v520 = v488 ^ v476;
  v521 = v99 ^ v514;
  v522 = v154;
  v523 = v516;
  v524 = v482 ^ v521;
  *(_DWORD *)(result + 608) = v512;
  v525 = v154 & ~v518 ^ v512;
  v526 = v476 & v154;
  v527 = v476 ^ v494 ^ v154;
  v528 = v476 & v522 ^ v477;
  *(_DWORD *)(result + 592) = v525;
  v529 = v351;
  v530 = v351 & *(_DWORD *)(result + 248);
  v531 = *(_DWORD *)(result + 8);
  *(_DWORD *)(result + 460) = v511 ^ v491;
  v532 = v531 & *(_DWORD *)(result + 224);
  v533 = *(_DWORD *)(result + 120);
  *(_DWORD *)(result + 740) = v532;
  v534 = v350 & ~v530;
  v535 = v350 & ~v533;
  v536 = *(_DWORD *)(result + 740);
  *(_DWORD *)(result + 492) = v535;
  v537 = v536 & ~v529;
  v538 = v277;
  v539 = v277 & v501;
  v540 = v348 & ~(v486 & v501);
  *(_DWORD *)(result + 452) = v523;
  *(_DWORD *)(result + 580) = v481 ^ v526;
  v541 = (v485 ^ v475) & v348;
  v542 = v486 ^ v475;
  v543 = v537;
  v544 = v486 ^ *(_DWORD *)(result + 16);
  *(_DWORD *)(result + 748) = v542;
  v545 = (v503 ^ v538) & v348;
  *(_DWORD *)(result + 644) = v502 ^ v474;
  v546 = (v502 ^ v538) & v348;
  v547 = v504 ^ v485;
  v548 = v504 ^ *(_DWORD *)(result + 200);
  v549 = *(_DWORD *)(result + 16);
  *(_DWORD *)(result + 600) = v528 ^ v517;
  *(_DWORD *)(result + 560) = v524;
  v550 = *(_DWORD *)(result + 200);
  v551 = v485 ^ v549;
  v552 = (v549 | v485) ^ v550;
  v553 = v539 & v550;
  *(_DWORD *)(result + 292) = v539 ^ v550;
  *(_DWORD *)(result + 568) = v478 ^ v522 & ~v520;
  *(_DWORD *)(result + 584) = v520 & v522 ^ v523;
  *(_DWORD *)(result + 596) = v519 ^ v493;
  *(_DWORD *)(result + 564) = v510 ^ v496;
  *(_DWORD *)(result + 612) = v487 ^ v524;
  *(_DWORD *)(result + 588) = v527;
  *(_DWORD *)(result + 456) = v473 ^ v527;
  *(_DWORD *)(result + 444) = v515 ^ v494;
  v554 = *(_DWORD *)(result + 392);
  *(_DWORD *)(result + 304) = *(_DWORD *)(result + 516) | v348;
  v555 = v554 ^ v534;
  v556 = *(_DWORD *)(result + 492);
  v557 = *(_DWORD *)(result + 216);
  *(_DWORD *)(result + 640) = v555;
  *(_DWORD *)(result + 336) = v556 & v557;
  *(_DWORD *)(result + 500) = v500 | *(_DWORD *)(result + 136);
  v558 = v543 ^ *(_DWORD *)(result + 224);
  v559 = *(_DWORD *)(result + 8) & ~*(_DWORD *)(result + 224);
  *(_DWORD *)(result + 704) = v541 ^ v551;
  v560 = v546 ^ *(_DWORD *)(result + 200);
  *(_DWORD *)(result + 540) = *(_DWORD *)(result + 644) ^ v547 & v348;
  v561 = *(_DWORD *)(result + 516);
  *(_DWORD *)(result + 420) = v544 ^ v348 & ~v548;
  *(_DWORD *)(result + 300) = v561;
  *(_DWORD *)(result + 380) = v509 ^ v506;
  *(_DWORD *)(result + 280) = v540 ^ v506;
  *(_DWORD *)(result + 512) = *(_DWORD *)(result + 700);
  *(_DWORD *)(result + 628) = v545 ^ *(_DWORD *)(result + 748);
  v562 = *(_DWORD *)(result + 700);
  *(_DWORD *)(result + 284) = v559;
  *(_DWORD *)(result + 668) = v553 ^ v474;
  *(_DWORD *)(result + 708) = v562;
  v563 = *(_DWORD *)(result + 200);
  *(_DWORD *)(result + 288) = v551;
  v564 = *(_DWORD *)(result + 256);
  *(_DWORD *)(result + 660) = v560;
  *(_DWORD *)(result + 648) = v564;
  *(_DWORD *)(result + 104) = v348;
  v565 = *(_DWORD *)(result + 504);
  *(_DWORD *)(result + 384) = v545 ^ v563;
  *(_DWORD *)(result + 488) = v348 & ~v503;
  *(_DWORD *)(result + 404) = v565;
  v566 = *(_DWORD *)(result + 256);
  *(_DWORD *)(result + 344) = v505 & ~v348 ^ v547;
  *(_DWORD *)(result + 476) = v348 & ~v505 ^ v552;
  *(_DWORD *)(result + 656) = v566;
  *(_DWORD *)(result + 368) = v506 & v348 ^ v547;
  v567 = *(_DWORD *)(result + 292) ^ v348 & ~v547;
  *(_DWORD *)(result + 364) = *(_DWORD *)(result + 504);
  *(_DWORD *)(result + 320) = v558;
  v568 = *(_DWORD *)(result + 740);
  *(_DWORD *)(result + 524) = v568;
  *(_DWORD *)(result + 744) = v568;
  *(_DWORD *)(result + 620) = v567;
  return result;
}
