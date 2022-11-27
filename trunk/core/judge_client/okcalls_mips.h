/*
 * 
 *
 * This file is part of HUSTOJ.
 *
 * HUSTOJ is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * HUSTOJ is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with HUSTOJ. if not, see <http://www.gnu.org/licenses/>.
 */
#include <sys/syscall.h>
#define HOJ_MAX_LIMIT -1
//C C++
int LANG_CV[CALL_ARRAY_SIZE]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,45,46,47,48,49,50,51,52,54,55,56,59,61,62,63,64,65,66,67,68,69,70,71,72,73,74,77,78,79,81,82,84,85,86,87,88,89,90,91,92,93,97,100,103,105,108,110,111,118,122,125,126,143,146,148,152,159,163,165,166,167,170,176,177,179,180,182,183,184,185,186,188,191,194,195,199,200,209,212,215,217,218,220,222,228,239,240,245,249,252,257,259,260,262,263,264,272,273,275,278,280,287,288,290,292,294,295,297,298,300,305,306,312,316,319,320,321,327,328,330,333,334,336,341,345,355,362,363,364,369,370,371,375,376,383,385,386,387,390,392,393,397,400,401,403,404,412,418,422,425,426,433,447,448,449,452,453,455,456,467,468,469,471,473,474,475,479,481,482,485,486,489,492,502,504,508,510,511,551,0};
//pascal
int LANG_PV[CALL_ARRAY_SIZE] = {0,3,4,54,85,174,191,248,0};
//java
int LANG_JV[CALL_ARRAY_SIZE]={0,2,5,32,36,46,54,74,85,92,122,127,148,177,320,392,395,396,397,401,402,403,404,405,406,408,412,430,447,449,479,3,7,8,9,29,33,34,40,44,45,48,49,66,81,90,95,156,167,168,185,194,197,199,200,204,205,222,226,232,237,241,263,300,326,346,349,352,356,361,363,364,381,382,393,394,398,399,400,416,423,439,448,482,487,509,510,0};
//ruby
int LANG_RV[CALL_ARRAY_SIZE] = {0,0};
//bash
int LANG_BV[CALL_ARRAY_SIZE]={0,3,4,5,6,19,20,33,45,54,63,64,65,78,122,125,140,174,175,183,191,192,195,197,199,200,201,202,221,248,0};
//python
int LANG_YV[CALL_ARRAY_SIZE]={0,1,2,6,8,11,15,20,21,22,24,30,31,32,36,37,39,40,41,44,48,49,51,54,56,60,61,63,65,68,71,72,73,74,76,81,83,86,87,88,91,92,94,97,98,101,102,109,111,114,115,120,122,124,126,131,133,135,136,140,144,146,147,148,151,155,156,161,162,165,168,171,172,173,177,181,182,183,184,185,187,191,192,194,197,198,201,208,209,211,212,213,214,215,220,222,228,231,234,238,240,241,242,244,247,251,252,253,255,256,257,260,261,265,266,267,268,273,274,276,278,282,284,285,287,292,293,294,295,298,303,308,309,311,313,316,321,322,329,332,335,337,340,342,343,344,345,346,348,351,352,353,355,356,360,366,371,372,373,377,379,384,385,388,392,393,396,398,401,403,409,413,414,419,422,425,426,427,432,433,435,436,442,443,444,445,446,448,450,451,452,453,454,456,460,461,466,468,471,472,473,474,477,480,481,483,484,485,488,493,494,496,498,499,500,502,503,510,0};
//int LANG_YV[CALL_ARRAY_SIZE]={0,6,11,22,24,32,65,86,111,122,126,133,135,165,211,222,228,234,238,265,276,287,311,322,329,335,345,377,422,433,435,444,445,477,496,0};
//php
int LANG_PHV[CALL_ARRAY_SIZE] = {0,0};
//perl
int LANG_PLV[CALL_ARRAY_SIZE] = {0,0};
//c-sharp
int LANG_CSV[CALL_ARRAY_SIZE]={0,3,5,6,19,33,45,122,125,174,175,191,192,195,197,256,338,0};
//objective-c
int LANG_OV[CALL_ARRAY_SIZE] = {0,0};
//freebasic
int LANG_BASICV[CALL_ARRAY_SIZE] = {0,0};
//scheme
int LANG_SV[CALL_ARRAY_SIZE] = {0,0};
//lua
int LANG_LUAV[CALL_ARRAY_SIZE]={0,0};
//nodejs
int LANG_JSV[CALL_ARRAY_SIZE]={0,0};
//go-lang
int LANG_GOV[CALL_ARRAY_SIZE]={0,0};
//sqlite3
int LANG_SQLV[CALL_ARRAY_SIZE]={0,1,2,3,4,5,6,7,12,13,16,17,18,20,21,22,25,28,32,36,40,41,44,49,51,52,57,64,70,85,90,92,100,119,122,127,148,152,167,168,174,177,197,216,272,320,360,392,393,395,396,397,398,400,401,402,404,405,406,407,408,409,412,430,432,433,459,461,462,465,468,469,477,487,492,497,0};
//fortran

int LANG_FV[CALL_ARRAY_SIZE]={0,2,3,4,6,85,122,392,393,397,404,405,412,453,479,0};
//matlab octave
int LANG_MV[CALL_ARRAY_SIZE]={0,1,2,3,4,5,6,9,8,10,11,12,13,16,17,18,22,24,25,28,32,33,36,40,42,48,55,56,57,60,61,64,66,72,74,76,80,83,85,88,92,96,104,111,112,116,120,122,124,126,128,131,132,133,134,135,136,144,147,148,152,157,160,164,168,169,176,179,184,185,193,200,208,215,216,224,245,248,251,256,257,264,272,279,287,288,296,304,312,315,318,320,323,328,336,337,339,344,347,349,352,368,371,372,376,377,384,385,392,393,394,395,396,397,399,400,401,402,403,404,405,406,407,408,411,412,424,431,432,433,435,436,439,440,443,446,447,448,451,452,453,455,456,462,464,468,469,472,487,488,490,492,496,497,504,510,511,0};
//Cobol
int LANG_CBV[CALL_ARRAY_SIZE]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,40,41,42,43,45,46,47,48,49,50,51,52,54,55,56,59,61,62,63,64,65,66,68,69,70,71,72,73,74,78,81,82,84,85,88,89,90,91,92,93,97,100,103,105,108,110,118,122,125,126,143,146,148,152,159,163,165,166,167,170,176,177,179,180,182,183,184,185,186,188,191,194,195,199,209,212,215,217,218,220,222,228,239,240,245,249,252,257,259,260,262,263,264,272,273,275,278,280,287,288,290,294,295,297,298,300,305,306,312,316,319,320,321,327,328,330,333,334,336,341,345,355,362,363,369,370,371,375,376,383,387,390,392,393,397,400,401,403,404,412,418,422,425,426,433,447,449,452,453,455,456,467,468,469,471,473,474,479,481,482,485,486,489,492,502,504,508,510,511,0};
