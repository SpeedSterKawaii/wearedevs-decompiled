// this isnt the source, its just the main init

// write access to const memory has been detected, the output may be wrong!

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
          &unk_10085658, // wrd big text
          "\n"
          " __      __          _____                ________                     \n"
          "/  \\    /  \\ ____   /  _  \\_______   ____ \\______ \\   _______  ________\n"
          "\\   \\/\\/   // __ \\ /  /_\\  \\_  __ \\_/ __ \\ |    |  \\_/ __ \\  \\/ /  ___/\n"
          " \\        /\\  ___//    |    \\  | \\/\\  ___/ |    `   \\  ___/\\   /\\___ \\ \n"
          "  \\__/\\  /  \\___  >____|__  /__|    \\___  >_______  /\\___  >\\_//____  >\n"
          "       \\/       \\/        \\/            \\/        \\/     \\/         \\/                                 "
          "                 \n");
  
  v14 = GetStdHandle(0xFFFFFFF5);
  SetConsoleTextAttribute(v14, 0xAu);
  v15 = *(_DWORD *)(v13 + 16);
  if ( *(_DWORD *)(v13 + 20) >= 0x10u )
    v16 = *(_DWORD *)v13;
  v17 = sub_10034E30(v15);
 
  SetConsoleTextAttribute(v20, 7u); // credits ew
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
    v
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
  sub_10023950("printidentity"); //sub_10023950 is wrap global
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
  ShowWindow(hWnd, 0); // hide console i think
  return 0;
}
