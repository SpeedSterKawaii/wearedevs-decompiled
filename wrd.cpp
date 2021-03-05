// this isnt the source, its just the main init

// write access to const memory has been detected, the output may be wrong!
DWORD __stdcall sub_10031570()
{
  int v0; // eax@4
  int v1; // eax@4
  HWND v2; // eax@4
  HWND v3; // ebx@4
  int v4; // eax@4
  int v5; // esi@4
  int v6; // eax@4
  int v7; // ecx@7
  unsigned int v8; // edx@7
  HANDLE v9; // eax@14
  int v10; // eax@14
  int v11; // eax@14
  int v12; // esi@14
  int v13; // esi@14
  HANDLE v14; // eax@14
  int v15; // eax@14
  int v16; // esi@15
  int v17; // eax@16
  int v18; // ecx@17
  unsigned int v19; // edx@17
  HANDLE v20; // eax@24
  int v21; // eax@24
  HANDLE v22; // eax@24
  int v23; // eax@24
  HANDLE v24; // eax@24
  int v25; // eax@24
  HANDLE v26; // eax@24
  int v27; // eax@24
  int v28; // esi@24
  HANDLE v29; // eax@26
  int v30; // eax@26
  int v31; // ecx@27
  int v32; // edx@27
  int v33; // eax@31
  int v34; // eax@33
  int v35; // ecx@34
  int v36; // edx@34
  int v37; // eax@37
  int v38; // eax@39
  int v39; // ecx@40
  int v40; // edx@40
  int *v41; // eax@43
  int v42; // eax@45
  int v43; // edx@45
  char v44; // bl@47
  int v45; // eax@52
  int v46; // edx@52
  char v47; // bl@54
  int v48; // eax@59
  int v49; // eax@70
  int v50; // eax@72
  int v51; // eax@76
  int v52; // esi@76
  int v53; // esi@76
  HANDLE v54; // eax@76
  int v55; // eax@76
  int v56; // esi@77
  int v57; // eax@78
  int v58; // ecx@79
  unsigned int v59; // edx@79
  int v60; // eax@86
  int v61; // eax@86
  int v62; // eax@87
  int v63; // eax@90
  int v64; // esi@90
  int v65; // ecx@91
  DWORD v66; // eax@95
  DWORD v67; // eax@98
  int v68; // ebx@101
  int (__cdecl **v69)(int); // esi@101
  const char *v70; // eax@102
  unsigned int v71; // edi@104
  int v72; // esi@106
  int v73; // edx@107
  int (__cdecl *v74)(int); // eax@107
  int v75; // edi@108
  int v76; // eax@108
  int v77; // esi@108
  HANDLE v78; // eax@108
  int v79; // eax@108
  int v80; // esi@108
  int v81; // edi@108
  int v82; // esi@110
  int v83; // eax@116
  int v84; // esi@116
  int v85; // esi@116
  HANDLE v86; // eax@116
  int v87; // eax@116
  int v88; // esi@117
  int v89; // eax@118
  unsigned int v90; // ecx@119
  int v91; // edx@119
  int v93; // [sp-30h] [bp-2E0h]@108
  int v94; // [sp-2Ch] [bp-2DCh]@108
  int v95; // [sp-28h] [bp-2D8h]@108
  int v96; // [sp-24h] [bp-2D4h]@0
  int v97; // [sp-24h] [bp-2D4h]@108
  int v98; // [sp-20h] [bp-2D0h]@52
  int v99; // [sp-1Ch] [bp-2CCh]@52
  char v100; // [sp-18h] [bp-2C8h]@24
  int v101; // [sp-14h] [bp-2C4h]@24
  int v102; // [sp-10h] [bp-2C0h]@24
  const CHAR *v103; // [sp-Ch] [bp-2BCh]@24
  const CHAR *v104; // [sp-8h] [bp-2B8h]@30
  const char *v105; // [sp-4h] [bp-2B4h]@9
  char v106; // [sp+0h] [bp-2B0h]@24
  HWND hWnd; // [sp+10h] [bp-2A0h]@4
  const char *v108; // [sp+14h] [bp-29Ch]@102
  DWORD flOldProtect; // [sp+18h] [bp-298h]@1
  __int128 v110; // [sp+1Ch] [bp-294h]@116
  __int128 v111; // [sp+2Ch] [bp-284h]@116
  __int128 v112; // [sp+3Ch] [bp-274h]@116
  __int128 v113; // [sp+4Ch] [bp-264h]@116
  __int128 v114; // [sp+5Ch] [bp-254h]@116
  __int128 v115; // [sp+6Ch] [bp-244h]@116
  __int128 v116; // [sp+7Ch] [bp-234h]@116
  __int128 v117; // [sp+8Ch] [bp-224h]@116
  __int128 v118; // [sp+9Ch] [bp-214h]@116
  __int128 v119; // [sp+ACh] [bp-204h]@116
  __int128 v120; // [sp+BCh] [bp-1F4h]@116
  __int128 v121; // [sp+CCh] [bp-1E4h]@116
  __int128 v122; // [sp+DCh] [bp-1D4h]@116
  __int128 v123; // [sp+ECh] [bp-1C4h]@116
  __int128 v124; // [sp+FCh] [bp-1B4h]@116
  __int128 v125; // [sp+10Ch] [bp-1A4h]@116
  __int128 v126; // [sp+11Ch] [bp-194h]@116
  __int128 v127; // [sp+12Ch] [bp-184h]@116
  __int128 v128; // [sp+13Ch] [bp-174h]@116
  __int128 v129; // [sp+14Ch] [bp-164h]@4
  __int128 v130; // [sp+15Ch] [bp-154h]@4
  __int128 v131; // [sp+16Ch] [bp-144h]@4
  __int128 v132; // [sp+17Ch] [bp-134h]@14
  __int128 v133; // [sp+18Ch] [bp-124h]@14
  __int128 v134; // [sp+19Ch] [bp-114h]@14
  __int128 v135; // [sp+1ACh] [bp-104h]@14
  __int128 v136; // [sp+1BCh] [bp-F4h]@14
  __int128 v137; // [sp+1CCh] [bp-E4h]@14
  __int128 v138; // [sp+1DCh] [bp-D4h]@14
  __int128 v139; // [sp+1ECh] [bp-C4h]@14
  __int128 v140; // [sp+1FCh] [bp-B4h]@14
  __int128 v141; // [sp+20Ch] [bp-A4h]@14
  __int128 v142; // [sp+21Ch] [bp-94h]@14
  __int128 v143; // [sp+22Ch] [bp-84h]@14
  __int128 v144; // [sp+23Ch] [bp-74h]@14
  int v145; // [sp+24Ch] [bp-64h]@14
  int v146; // [sp+250h] [bp-60h]@14
  int v147; // [sp+254h] [bp-5Ch]@14
  unsigned int v148; // [sp+258h] [bp-58h]@48
  int v149; // [sp+268h] [bp-48h]@122
  unsigned int v150; // [sp+26Ch] [bp-44h]@47
  int v151; // [sp+270h] [bp-40h]@4
  int v152; // [sp+280h] [bp-30h]@10
  unsigned int v153; // [sp+284h] [bp-2Ch]@6
  int *v154; // [sp+288h] [bp-28h]@43
  int v155; // [sp+294h] [bp-1Ch]@4
  int v156; // [sp+298h] [bp-18h]@4
  int v157; // [sp+29Ch] [bp-14h]@4
  int v158; // [sp+2ACh] [bp-4h]@4

  if ( VirtualProtect(FreeConsole, 1u, 0x40u, &flOldProtect) )
  {
    LOBYTE(FreeConsole) = -61;
    if ( VirtualProtect(FreeConsole, 1u, flOldProtect, &flOldProtect) )
      AllocConsole();
  }
  v0 = sub_10040379(1);
  sub_1004016D("CONOUT$", "w", v0);
  v1 = sub_10040379(0);
  sub_1004016D("CONIN$", "r", v1);
  v2 = GetConsoleWindow();
  v3 = v2;
  hWnd = v2;
  SetWindowPos(v2, HWND_MESSAGE|0x2, 50, 20, 0, 0, 0x63u);
  ShowWindow(v3, 1);
  v129 = xmmword_100791D0;
  v130 = xmmword_10079260;
  v131 = xmmword_10079060;
  v4 = sub_10034580(12);
  v155 = v4;
  v5 = v4 + 48;
  v157 = v4 + 48;
  sub_1003D4A0(v4, &v129, 48);
  v156 = v5;
  v158 = 0;
  v6 = sub_100207D0(&v151, &v155);
  if ( *(_DWORD *)(v6 + 20) >= 0x10u )
    v6 = *(_DWORD *)v6;
  SetConsoleTitleA((LPCSTR)v6);
  if ( v153 >= 0x10 )
  {
    v7 = v151;
    v8 = v153 + 1;
    if ( v153 + 1 >= 0x1000 )
    {
      v7 = *(_DWORD *)(v151 - 4);
      v8 = v153 + 36;
      if ( (unsigned int)(v151 - v7 - 4) > 0x1F )
        goto LABEL_127;
    }
    v105 = (const char *)v8;
    sub_100387A1(v7);
  }
  v158 = -1;
  v7 = v155;
  v152 = 0;
  v153 = 15;
  LOBYTE(v151) = 0;
  if ( !v155 )
    goto LABEL_14;
  v8 = 4 * ((v157 - v155) >> 2);
  if ( v8 >= 0x1000 )
  {
    v7 = *(_DWORD *)(v155 - 4);
    v8 += 35;
    if ( (unsigned int)(v155 - v7 - 4) > 0x1F )
LABEL_127:
      sub_10049249(v7, v8);
  }
  v105 = (const char *)v8;
  sub_100387A1(v7);
LABEL_14:
  v9 = GetStdHandle(0xFFFFFFF5);
  SetConsoleTextAttribute(v9, 5u);
  v10 = sub_10033470(
          &unk_10085658,
          "\n"
          " __      __          _____                ________                     \n"
          "/  \\    /  \\ ____   /  _  \\_______   ____ \\______ \\   _______  ________\n"
          "\\   \\/\\/   // __ \\ /  /_\\  \\_  __ \\_/ __ \\ |    |  \\_/ __ \\  \\/ /  ___/\n"
          " \\        /\\  ___//    |    \\  | \\/\\  ___/ |    `   \\  ___/\\   /\\___ \\ \n"
          "  \\__/\\  /  \\___  >____|__  /__|    \\___  >_______  /\\___  >\\_//____  >\n"
          "       \\/       \\/        \\/            \\/        \\/     \\/         \\/                                 "
          "                 \n");
  sub_10033730(v10);
  v132 = xmmword_100791F0;
  v133 = xmmword_100791C0;
  v145 = 110;
  v134 = xmmword_10079230;
  v146 = 101;
  v135 = xmmword_10078F90;
  v147 = 116;
  v136 = xmmword_10079250;
  v137 = xmmword_10078FB0;
  v138 = xmmword_10079280;
  v139 = xmmword_100790C0;
  v140 = xmmword_10079220;
  v141 = xmmword_10079030;
  v142 = xmmword_10079120;
  v143 = xmmword_100790D0;
  v144 = xmmword_10079010;
  v11 = sub_10034580(55);
  v155 = v11;
  v12 = v11 + 220;
  v157 = v11 + 220;
  sub_1003D4A0(v11, &v132, 220);
  v156 = v12;
  v158 = 1;
  v13 = sub_100207D0(&v151, &v155);
  LOBYTE(v158) = 2;
  v14 = GetStdHandle(0xFFFFFFF5);
  SetConsoleTextAttribute(v14, 0xAu);
  v15 = *(_DWORD *)(v13 + 16);
  if ( *(_DWORD *)(v13 + 20) >= 0x10u )
    v16 = *(_DWORD *)v13;
  v17 = sub_10034E30(v15);
  sub_100339F0(v17);
  LOBYTE(v158) = 1;
  if ( v153 >= 0x10 )
  {
    v18 = v151;
    v19 = v153 + 1;
    if ( v153 + 1 >= 0x1000 )
    {
      v18 = *(_DWORD *)(v151 - 4);
      v19 = v153 + 36;
      if ( (unsigned int)(v151 - v18 - 4) > 0x1F )
        goto LABEL_128;
    }
    v105 = (const char *)v19;
    sub_100387A1(v18);
  }
  v158 = -1;
  v18 = v155;
  v152 = 0;
  v153 = 15;
  LOBYTE(v151) = 0;
  if ( !v155 )
    goto LABEL_24;
  v19 = 4 * ((v157 - v155) >> 2);
  if ( v19 >= 0x1000 )
  {
    v18 = *(_DWORD *)(v155 - 4);
    v19 += 35;
    if ( (unsigned int)(v155 - v18 - 4) > 0x1F )
LABEL_128:
      sub_10049249(v18, v19);
  }
  v105 = (const char *)v19;
  sub_100387A1(v18);
LABEL_24:
  v20 = GetStdHandle(0xFFFFFFF5);
  SetConsoleTextAttribute(v20, 7u);
  v21 = sub_10033470(&unk_10085658, "Credits to Imperious & Robomat for helping with development");
  sub_100339F0(v21);
  v22 = GetStdHandle(0xFFFFFFF5);
  SetConsoleTextAttribute(v22, 7u);
  v23 = sub_10033470(&unk_10085658, "Thank you Rakion99 and ThunderMods for all your help");
  sub_100339F0(v23);
  v24 = GetStdHandle(0xFFFFFFF5);
  SetConsoleTextAttribute(v24, 0xDu);
  sub_10033470(&unk_10085658, "UPDATE ID: 107 FOR ");
  v25 = sub_10034E30(dword_10084D4C);
  sub_100339F0(v25);
  v26 = GetStdHandle(0xFFFFFFF5);
  SetConsoleTextAttribute(v26, 0xAu);
  sub_1001F850("Message July 12: Everything is back, including instance caching!\n", v106);
  v100 = 0;
  sub_10032FC0("436865636b696e6720726f626c6f782076657273696f6e2e2e2e", 52);
  v27 = sub_10020880(*(_DWORD *)&v100, v101, v102, v103, 0, 15);
  v28 = v27;
  v158 = 3;
  if ( *(_DWORD *)(v27 + 20) >= 0x10u )
    v28 = *(_DWORD *)v27;
  v29 = GetStdHandle(0xFFFFFFF5);
  SetConsoleTextAttribute(v29, 0xEu);
  v30 = sub_10033470(&unk_10085658, v28);
  sub_100339F0(v30);
  v158 = -1;
  if ( v153 >= 0x10 )
  {
    v31 = v151;
    v32 = v153 + 1;
    if ( v153 + 1 >= 0x1000 )
    {
      v31 = *(_DWORD *)(v151 - 4);
      v32 = v153 + 36;
      if ( (unsigned int)(v151 - v31 - 4) > 0x1F )
        sub_10049249(v31, v32);
    }
    v105 = (const char *)v32;
    sub_100387A1(v31);
  }
  sub_10032D90(&dword_10084D3C);
  if ( !(unsigned __int8)sub_10031350(*(_DWORD *)&v100, v101, v102, v103, v104, v105) )
  {
    v100 = 0;
    sub_10032FC0(
      "5568206f682e2e2e204974206c6f6f6b73206c696b6520526f626c6f782068617320757064617465642c20736f20746869732076657273696f"
      "6e20776f6e277420776f726b2e20506c65617365207761697420666f72207468652063726561746f727320746f2075706461746521",
      220);
    v33 = sub_10020880(*(_DWORD *)&v100, v101, v102, v103, 0, 15);
    v158 = 4;
    if ( *(_DWORD *)(v33 + 20) >= 0x10u )
      v33 = *(_DWORD *)v33;
    v34 = sub_10033470(&unk_10085658, v33);
    sub_100339F0(v34);
    v158 = -1;
    if ( v153 >= 0x10 )
    {
      v35 = v151;
      v36 = v153 + 1;
      if ( v153 + 1 >= 0x1000 )
      {
        v35 = *(_DWORD *)(v151 - 4);
        v36 = v153 + 36;
        if ( (unsigned int)(v151 - v35 - 4) > 0x1F )
          sub_10049249(v35, v36);
      }
      v105 = (const char *)v36;
      sub_100387A1(v35);
    }
    v100 = 0;
    sub_10032FC0(
      "53617920226f6b61792220746f2068696465206f722022696e666f2220746f20766965772074686520776562736974652e",
      98);
    v37 = sub_10020880(*(_DWORD *)&v100, v101, v102, v103, 0, 15);
    v158 = 5;
    if ( *(_DWORD *)(v37 + 20) >= 0x10u )
      v37 = *(_DWORD *)v37;
    v38 = sub_10033470(&unk_10085658, v37);
    sub_100339F0(v38);
    v158 = -1;
    if ( v153 >= 0x10 )
    {
      v39 = v151;
      v40 = v153 + 1;
      if ( v153 + 1 >= 0x1000 )
      {
        v39 = *(_DWORD *)(v151 - 4);
        v40 = v153 + 36;
        if ( (unsigned int)(v151 - v39 - 4) > 0x1F )
          sub_10049249(v39, v40);
      }
      v105 = (const char *)v40;
      sub_100387A1(v39);
    }
    while ( 1 )
    {
      v156 = 0;
      v157 = 15;
      LOBYTE(v154) = 0;
      v158 = 6;
      sub_10034B80(&dword_100857A8, &v154);
      v41 = (int *)&v154;
      if ( (unsigned int)v157 >= 0x10 )
        v41 = v154;
      sub_1001F850(v41, v106);
      v100 = 0;
      sub_10032FC0("6f6b6179", 8);
      v42 = sub_10020880(*(_DWORD *)&v100, v101, v102, v103, 0, 15);
      v43 = v42;
      if ( *(_DWORD *)(v42 + 20) >= 0x10u )
        v43 = *(_DWORD *)v42;
      v44 = sub_10035120(v43, *(_DWORD *)(v42 + 16));
      if ( v150 >= 0x10 )
      {
        v7 = v148;
        v8 = v150 + 1;
        if ( v150 + 1 >= 0x1000 )
        {
          v7 = *(_DWORD *)(v148 - 4);
          v8 = v150 + 36;
          if ( v148 - v7 - 4 > 0x1F )
            goto LABEL_127;
        }
        v105 = (const char *)v8;
        sub_100387A1(v7);
      }
      if ( v44 )
        goto LABEL_65;
      v100 = 0;
      sub_10032FC0("696e666f", 8);
      v45 = sub_10020880(*(_DWORD *)&v100, v101, v102, v103, 0, 15);
      v46 = v45;
      if ( *(_DWORD *)(v45 + 20) >= 0x10u )
        v46 = *(_DWORD *)v45;
      v47 = sub_10035120(v46, *(_DWORD *)(v45 + 16));
      if ( v150 >= 0x10 )
      {
        v7 = v148;
        v8 = v150 + 1;
        if ( v150 + 1 >= 0x1000 )
        {
          v7 = *(_DWORD *)(v148 - 4);
          v8 = v150 + 36;
          if ( v148 - v7 - 4 > 0x1F )
            goto LABEL_127;
        }
        v105 = (const char *)v8;
        sub_100387A1(v7);
      }
      if ( v47 )
        break;
      v100 = 0;
      sub_10032FC0(
        "53617920226f6b61792220746f2068696465206f722022696e666f2220746f20766965772074686520776562736974652e",
        98);
      v49 = sub_10020880(*(_DWORD *)&v100, v101, v102, v103, 0, 15);
      LOBYTE(v158) = 7;
      if ( *(_DWORD *)(v49 + 20) >= 0x10u )
        v49 = *(_DWORD *)v49;
      v50 = sub_10033470(&unk_10085658, v49);
      sub_100339F0(v50);
      LOBYTE(v158) = 6;
      if ( v150 >= 0x10 )
      {
        v7 = v148;
        v8 = v150 + 1;
        if ( v150 + 1 >= 0x1000 )
        {
          v7 = *(_DWORD *)(v148 - 4);
          v8 = v150 + 36;
          if ( v148 - v7 - 4 > 0x1F )
            goto LABEL_127;
        }
        v105 = (const char *)v8;
        sub_100387A1(v7);
      }
LABEL_66:
      v158 = -1;
      if ( (unsigned int)v157 >= 0x10 )
      {
        v7 = (int)v154;
        v8 = v157 + 1;
        if ( (unsigned int)(v157 + 1) >= 0x1000 )
        {
          v7 = *(v154 - 1);
          v8 = v157 + 36;
          if ( (unsigned int)v154 + -v7 - 4 > 0x1F )
            goto LABEL_127;
        }
        v105 = (const char *)v8;
        sub_100387A1(v7);
      }
    }
    v105 = (const char *)1;
    v104 = 0;
    v103 = 0;
    LOBYTE(v96) = 0;
    sub_10032FC0("68747470733a2f2f7765617265646576732e6e65742f", 44);
    v48 = sub_10020880(v96, v98, v99, *(_DWORD *)&v100, 0, 15);
    if ( *(_DWORD *)(v48 + 20) >= 0x10u )
      v48 = *(_DWORD *)v48;
    ShellExecuteA(0, "open", (LPCSTR)v48, v103, v104, (INT)v105);
    if ( v150 >= 0x10 )
    {
      v7 = v148;
      v8 = v150 + 1;
      if ( v150 + 1 >= 0x1000 )
      {
        v7 = *(_DWORD *)(v148 - 4);
        v8 = v150 + 36;
        if ( v148 - v7 - 4 > 0x1F )
          goto LABEL_127;
      }
      v105 = (const char *)v8;
      sub_100387A1(v7);
    }
LABEL_65:
    ShowWindow(hWnd, 0);
    goto LABEL_66;
  }
  v137 = xmmword_10079090;
  v138 = xmmword_10079270;
  v145 = 109;
  v139 = xmmword_10078FC0;
  v146 = 101;
  v140 = xmmword_10079170;
  v147 = 46;
  v141 = xmmword_10079110;
  v142 = xmmword_10079070;
  v143 = xmmword_10079130;
  v144 = xmmword_100790A0;
  v51 = sub_10034580(35);
  v155 = v51;
  v52 = v51 + 140;
  v157 = v51 + 140;
  sub_1003D4A0(v51, &v137, 140);
  v156 = v52;
  v158 = 8;
  v53 = sub_100207D0(&v151, &v155);
  LOBYTE(v158) = 9;
  v54 = GetStdHandle(0xFFFFFFF5);
  SetConsoleTextAttribute(v54, 0xEu);
  v55 = *(_DWORD *)(v53 + 16);
  if ( *(_DWORD *)(v53 + 20) >= 0x10u )
    v56 = *(_DWORD *)v53;
  v57 = sub_10034E30(v55);
  sub_100339F0(v57);
  LOBYTE(v158) = 8;
  if ( v153 >= 0x10 )
  {
    v58 = v151;
    v59 = v153 + 1;
    if ( v153 + 1 >= 0x1000 )
    {
      v58 = *(_DWORD *)(v151 - 4);
      v59 = v153 + 36;
      if ( (unsigned int)(v151 - v58 - 4) > 0x1F )
        goto LABEL_132;
    }
    v105 = (const char *)v59;
    sub_100387A1(v58);
  }
  v158 = -1;
  v58 = v155;
  v152 = 0;
  v153 = 15;
  LOBYTE(v151) = 0;
  if ( !v155 )
    goto LABEL_86;
  v59 = 4 * ((v157 - v155) >> 2);
  if ( v59 >= 0x1000 )
  {
    v58 = *(_DWORD *)(v155 - 4);
    v59 += 35;
    if ( (unsigned int)(v155 - v58 - 4) > 0x1F )
LABEL_132:
      sub_10049249(v58, v59);
  }
  v105 = (const char *)v59;
  sub_100387A1(v58);
LABEL_86:
  sub_10035540();
  v60 = sub_10035680((LPCVOID)dword_100861D8, sub_1002DC50, 0);
  sub_10035680((LPCVOID)dword_100861D8, sub_1002DC50, v60);
  sub_10035AA0(dword_100861D8);
  sub_10035AC0(dword_100861D8);
  v61 = dword_10086154;
  if ( !dword_10086154 )
  {
    v62 = sub_10035680((LPCVOID)dword_100861D8, sub_1002DC50, dword_10086154);
    sub_10035680((LPCVOID)dword_100861D8, sub_1002DC50, v62);
    sub_10035AA0(dword_100861D8);
    while ( !dword_1008616C )
      Sleep(1u);
    sub_10035AC0(dword_100861D8);
    v61 = dword_10086154;
  }
  dword_10086158 = v61;
  dword_1008616C = v61;
  v63 = sub_10040534(0, 376);
  v64 = v63;
  if ( v63 )
  {
    v65 = v63 + 120;
    *(_WORD *)(v65 + 20) = 33;
    *(_DWORD *)(v65 + 16) = 0;
    *(_WORD *)(v63 + 52) = 0;
    *(_BYTE *)(v63 + 6) = 0;
    *(_DWORD *)(v63 + 20) = 0;
    *(_DWORD *)(v63 + 40) = 0;
    *(_DWORD *)(v63 + 24) = 0;
    *(_DWORD *)(v63 + 116) = 0;
    *(_DWORD *)(v63 + 80) = 0;
    *(_DWORD *)(v65 + 136) = v63 + 240;
    *(_DWORD *)(v65 + 140) = v63 + 240;
    *(_DWORD *)(v63 + 16) = v63 + 120;
    *(_DWORD *)(v65 + 12) = sub_10003830;
    *(_DWORD *)(v65 + 112) = v63;
    *(_DWORD *)(v65 + 64) = 0;
    *(_DWORD *)(v65 + 8) = 0;
    *(_DWORD *)(v65 + 4) = 0;
    *(_DWORD *)v65 = 0;
    *(_DWORD *)v63 = 0;
    *(_WORD *)(v63 + 4) = 24840;
    *(_DWORD *)(v63 + 32) = 0;
    *(_DWORD *)(v63 + 44) = 0;
    *(_DWORD *)(v63 + 112) = 0;
    *(_DWORD *)(v63 + 68) = 0;
    *(_DWORD *)(v63 + 54) = 0x1000000;
    *(_DWORD *)(v63 + 60) = 0;
    *(_DWORD *)(v63 + 64) = 0;
    *(_DWORD *)(v63 + 104) = 0;
    *(_DWORD *)(v63 + 48) = 0;
    *(_DWORD *)(v65 + 104) = 0;
    *(_DWORD *)(v65 + 52) = 0;
    *(_DWORD *)(v65 + 60) = 0;
    *(_DWORD *)(v65 + 88) = 0;
    *(_DWORD *)(v65 + 24) = 0;
    *(_DWORD *)(v65 + 32) = v63 + 148;
    *(_DWORD *)(v65 + 36) = 0;
    *(_DWORD *)(v65 + 40) = 0;
    *(_DWORD *)(v65 + 44) = 0;
    *(_DWORD *)(v65 + 48) = 0;
    *(_DWORD *)(v65 + 68) = 376;
    *(_DWORD *)(v65 + 80) = 200;
    *(_DWORD *)(v65 + 84) = 200;
    *(_DWORD *)(v65 + 76) = 0;
    *(_DWORD *)(v63 + 148) = v63;
    *(_DWORD *)(v65 + 152) = 0;
    *(_DWORD *)(v65 + 156) = 0;
    *(_DWORD *)(v65 + 160) = 0;
    *(_DWORD *)(v65 + 164) = 0;
    *(_DWORD *)(v65 + 168) = 0;
    *(_DWORD *)(v65 + 172) = 0;
    *(_DWORD *)(v65 + 176) = 0;
    *(_DWORD *)(v65 + 180) = 0;
    *(_DWORD *)(v65 + 184) = 0;
    if ( sub_1000AEF0(0) )
    {
      sub_10016AE0(v64);
      v64 = 0;
    }
    if ( v64 )
      *(_DWORD *)(*(_DWORD *)(v64 + 16) + 88) = sub_10003860;
  }
  v105 = "Starting wrapper...\n";
  dword_10086168 = v64;
  *(_DWORD *)(dword_1008616C - 40) ^= (*(_BYTE *)(dword_1008616C - 40) ^ 6) & 0x1F;
  sub_1001F850(v105, v106);
  v66 = sub_100211F0();
  flOldProtect = v66;
  if ( dword_10086210 == dword_10086214 )
  {
    sub_10033D10(dword_10086210, &flOldProtect);
  }
  else
  {
    *(_DWORD *)dword_10086210 = v66;
    dword_10086210 += 4;
  }
  v67 = sub_100211F0();
  flOldProtect = v67;
  if ( dword_10086210 == dword_10086214 )
  {
    sub_10033D10(dword_10086210, &flOldProtect);
  }
  else
  {
    *(_DWORD *)dword_10086210 = v67;
    dword_10086210 += 4;
  }
  AddVectoredExceptionHandler(1u, Handler);
  v68 = dword_10086168;
  v69 = &off_10075A6C;
  flOldProtect = (DWORD)&off_10075A6C;
  do
  {
    sub_100018E0(0);
    v70 = (const char *)*(v69 - 1);
    v108 = v70;
    if ( v70 )
    {
      v71 = strlen(v70);
      if ( *(_DWORD *)(*(_DWORD *)(v68 + 16) + 68) >= *(_DWORD *)(*(_DWORD *)(v68 + 16) + 64) )
        sub_1000D4A0(v68);
      v72 = *(_DWORD *)(v68 + 8);
      *(_DWORD *)v72 = sub_10016C80(v71);
      *(_DWORD *)(v72 + 8) = 4;
      v69 = (int (__cdecl **)(int))flOldProtect;
    }
    else
    {
      *(_DWORD *)(*(_DWORD *)(v68 + 8) + 8) = 0;
    }
    *(_DWORD *)(v68 + 8) += 16;
    v73 = *(_DWORD *)(v68 + 8);
    sub_1000B990(0);
    v74 = v69[2];
    v69 += 2;
    flOldProtect = (DWORD)v69;
  }
  while ( v74 );
  sub_10002330(dword_10086168, "garbagecollector");
  sub_100018E0(0);
  sub_100019B0("__gc");
  v75 = dword_10086168;
  v76 = sub_10001530(dword_10086168, -1);
  v77 = *(_DWORD *)(v75 + 8);
  v103 = "__index";
  *(_DWORD *)v77 = *(_DWORD *)v76;
  *(_DWORD *)(v77 + 4) = *(_DWORD *)(v76 + 4);
  *(_DWORD *)(v77 + 8) = *(_DWORD *)(v76 + 8);
  *(_DWORD *)(v75 + 8) += 16;
  sub_100019B0(v103);
  sub_1001F850("Wrapping...\n", (char)v103);
  sub_10023950("printidentity");
  sub_10023950("game");
  sub_10023950("Game");
  sub_10023950("workspace");
  sub_10023950("Workspace");
  sub_10023950("Axes");
  sub_10023950("BrickColor");
  sub_10023950("CFrame");
  sub_10023950("Color3");
  sub_10023950("ColorSequence");
  sub_10023950("ColorSequenceKeypoint");
  sub_10023950("NumberRange");
  sub_10023950("NumberSequence");
  sub_10023950("NumberSequenceKeypoint");
  sub_10023950("PhysicalProperties");
  sub_10023950("Ray");
  sub_10023950("Rect");
  sub_10023950("Region3");
  sub_10023950("Region3int16");
  sub_10023950("TweenInfo");
  sub_10023950("UDim");
  sub_10023950("UDim2");
  sub_10023950("Vector2");
  sub_10023950("Vector2int16");
  sub_10023950("Vector3");
  sub_10023950("Vector3int16");
  sub_10023950("Enum");
  sub_10023950("Faces");
  sub_10023950("Instance");
  sub_10023950("math");
  sub_10023950("warn");
  sub_10023950("typeof");
  sub_10023950("type");
  sub_10023950("spawn");
  sub_10023950("Spawn");
  sub_10023950("print");
  sub_10023950("printidentity");
  sub_10023950("ypcall");
  sub_10023950("Wait");
  sub_10023950("wait");
  sub_10023950("delay");
  sub_10023950("Delay");
  sub_10023950("tick");
  sub_10023950("LoadLibrary");
  v78 = GetStdHandle(0xFFFFFFF5);
  SetConsoleTextAttribute(v78, 0xEu);
  v79 = sub_10033470(&unk_10085658, "Loading custom environment...");
  sub_100339F0(v79);
  v80 = dword_10086168;
  sub_1002F9F0(dword_10086168);
  sub_1002F1F0(v80);
  sub_1002ED20(v80);
  sub_1002E590(v80);
  sub_1002FEB0(v80);
  sub_1002E000(v80);
  v81 = dword_10086168;
  if ( *(_DWORD *)(*(_DWORD *)(dword_10086168 + 16) + 68) >= *(_DWORD *)(*(_DWORD *)(dword_10086168 + 16) + 64) )
    sub_1000D4A0(dword_10086168);
  v82 = *(_DWORD *)(v81 + 8);
  *(_DWORD *)v82 = sub_1001AAC0(0);
  *(_DWORD *)(v82 + 8) = 5;
  *(_DWORD *)(v81 + 8) += 16;
  sub_100019B0("_G");
  if ( !sub_10003780(78, "os.execute = nil; os.remove = nil; os.rename = nil; os.tmpname = nil; io = nil") )
    sub_10001C60(-1, 0);
  if ( !sub_10003780(
          117,
          "function GetObjects(assetId) local obj = game:GetService(\"InsertService\"):LoadLocalAsset(assetId) return { obj }; end") )
    sub_10001C60(-1, 0);
  CreateThread(0, 0, sub_10030190, 0, 0, 0);
  CreateThread(0, 0, loc_10030570, 0, 0, 0);
  CreateThread(0, 0, sub_10030710, 0, 0, 0);
  CreateThread(0, 0, loc_10030BD0, 0, 0, 0);
  if ( !sub_10003780(34, "print('WeAreDevs API has loaded!')") )
    sub_10001C60(-1, 0);
  v108 = &v100;
  v104 = 0;
  v105 = (const char *)15;
  v100 = 0;
  sub_10032FC0("Powered by wearedevs.net", 24);
  v158 = 10;
  LOBYTE(v93) = 0;
  sub_10032FC0("WRD API", 7);
  v158 = -1;
  sub_10023A00(v93, v94, v95, v97, 0, 15, *(_DWORD *)&v100, v101, v102, v103, v104, v105);
  v110 = xmmword_10078FF0;
  v111 = xmmword_10079000;
  v112 = xmmword_10079150;
  v113 = xmmword_10079200;
  v114 = xmmword_10078F70;
  v115 = xmmword_10078F60;
  v116 = xmmword_10079180;
  v117 = xmmword_10078FD0;
  v118 = xmmword_100790F0;
  v119 = xmmword_10079240;
  v120 = xmmword_10079210;
  v121 = xmmword_10079030;
  v122 = xmmword_10079120;
  v123 = xmmword_100790D0;
  v124 = xmmword_10079010;
  v125 = xmmword_10079020;
  v126 = xmmword_100791C0;
  v127 = xmmword_10079230;
  v128 = xmmword_10079050;
  v83 = sub_10034580(76);
  v155 = v83;
  v84 = v83 + 304;
  v157 = v83 + 304;
  sub_1003D4A0(v83, &v110, 304);
  v156 = v84;
  v158 = 11;
  v85 = sub_100207D0(&v148, &v155);
  LOBYTE(v158) = 12;
  v86 = GetStdHandle(0xFFFFFFF5);
  SetConsoleTextAttribute(v86, 0xAu);
  v87 = *(_DWORD *)(v85 + 16);
  if ( *(_DWORD *)(v85 + 20) >= 0x10u )
    v88 = *(_DWORD *)v85;
  v89 = sub_10034E30(v87);
  sub_100339F0(v89);
  if ( v150 >= 0x10 )
  {
    v90 = v148;
    v91 = v150 + 1;
    if ( v150 + 1 >= 0x1000 )
    {
      v90 = *(_DWORD *)(v148 - 4);
      v91 = v150 + 36;
      if ( v148 - v90 - 4 > 0x1F )
        goto LABEL_133;
    }
    v105 = (const char *)v91;
    sub_100387A1(v90);
  }
  v91 = v155;
  v149 = 0;
  v150 = 15;
  LOBYTE(v148) = 0;
  if ( v155 )
  {
    v90 = (v157 - v155) & 0xFFFFFFFC;
    if ( v90 < 0x1000 || (v91 = *(_DWORD *)(v155 - 4), v90 += 35, (unsigned int)(v155 - v91 - 4) <= 0x1F) )
    {
      v105 = (const char *)v90;
      sub_100387A1(v91);
      goto LABEL_126;
    }
LABEL_133:
    sub_10049249(v90, v91);
  }
LABEL_126:
  ShowWindow(hWnd, 0);
  return 0;
}
