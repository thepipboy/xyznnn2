#include "XYZ.py"
void lowerbit(DE){
char a = "00001010";
char b = "00001011";
char c = "00001100";
    
char d = "00001101";
char e = "00001110";
char f = "00001111";
    
char g = "00010000";
char h = "00010001";
char i = "00010010";
char j = "00010011";
char k = "00010100";
char l = "00010101";
    
char m = "00010110";
char n = "00010111";
char o = "00011000";
char p = "00011001";
char q = "00011010";
    
char r = "00011011";
char s = "00011101";
char t = "00011110";
char u = "00011111";
char v = "00100000";
char w = "00100001";
    
char x = "00100010"; 
char y = "00100011";
char z = "00100100";
}
void UPPERBIT(RE){
char A = "11110101";
char B = "11110100";
char C = "11110011";
char D = "11110010";
char E = "11110001";
char F = "11110000";
    
char G = "11101111";
char H = "11101110";
    
char I = "11111101";
char J = "11101100";
char K = "11101011";
char L = "11101010";
    
char M = "11101001";
char N = "11101000";
char O = "11100111";
char P = "11100110";
char Q = "11100101";
char R = "11100100";
    
char S = "11100011";
char T = "11100010";
char U = "11000000";
char V = "11011111";
char W = "11011110";
    
char X = "11011101";
char Y = "11011100";
char Z = "11011011";
}
int mapping(RE){
    char 
    a = 'A',b = 'B',c = 'C', 
    d = 'D',e = 'E',f = 'F',
    g = 'G',h = 'H',i = 'I', 
    j = 'J',k = 'K',l = 'L',
    m = 'M',n = 'N',o = 'O', 
    p = 'P',q = 'Q',r = 'R',
    s = 'S',t = 'T',
    u = 'U',v = 'V',w = 'W',
    x = 'X',y = 'Y',z = 'Z';
}
int xyznnn(x,y,z,n){
    return 
        x-n,y+n,z-n, x-n,y+n,z+n, x+n,y+n,z+n, x+n,y+n,z-n,
        x-n,y-n,z-n, x+n,y-n,z-n, x+n,y-n,z+n, x-n,y-n,z+n, 
        x-n,y-n,z-n, x-n,y-n,z+n, x-n,y+n,z+n, x-n,y+n,z-n, 
        x+n,y-n,z+n, x+n,y-n,z-n, x+n,y+n,z-n, x+n,y+n,z+n, 
        x-n,y-n,z+n, x+n,y-n,z+n, x+n,y+n,z+n, x-n,y+n,z+n, 
        x+n,y-n,z-n, x-n,y-n,z-n, x-n,y+n,z-n, x+n,y+n,z-n;
}
int XYZT(X,Y,Z,N,a,b,c,d,e,f){
    return
        a * sin(X + N) + b * cos(X - N) + c * sin(Y + N) + d * cos(Y - N) + e * sin(Z + N) + f * cos(Z - N),           
        a * asin(X + N) + b * acos(X - N) + c * asin(Y + N) + d * acos(Y - N) + e * asin(Z + N) + f * acos(Z - N), 
        a * sinh(X + N) + b * cosh(X - N) + c * sinh(Y + N) + d * cosh(Y - N) + e * sinh(Z + N) + f * cosh(Z - N),        
        a * asinh(X + N) + b * acosh(X - N) + c * asinh(Y + N) + d * acosh(Y - N) + e * asinh(Z + N) + f * acosh(Z - N),  
        a * tan(X + N) + b * atan(X - N) + c * tan(Y + N) + d * atan(Y - N) + e * tan(Z + N) + f * atan(Z - N),
        a * exp(X + N) + b * log(X - N) + c * exp(Y + N) + d * log(Y - N) + e * exp(Z + N) + f * log(Z - N); 
}

float main(){
    float a = 1/7;
    float b = 2/7;
    float c = 3/7;
    float d = 4/7;
    float e = 5/7;
    float f = 6/7;
}
double obfuscation(DE){
    return 'a'*sin('A') + 'b'*cos('B') + 'c'*sin('C') + 'd'*cos('D');
    return 'e'%exp('E') + 'f'%log('E') + 'g'%exp('G') + 'h'%log('H');
    return 'i'/sinh('I') + 'j'/cosh('J') + 'k'/sinh('K') + 'l'/cosh('L');
    return 'm'-ceil('M') + 'n'-floor('N') + 'o'-ceil('O') + 'p'-floor('P');
    return 'r'&asinh('R') + 's'&acosh('S') + 't'&asinh('T') + 'uv'&acosh('UV');
    return 'w'^modf('W') + 'x'^fmod('X') + 'y'^modf('Y') + 'z'^fmod('Z');
}

//weight and Hexdemical
void fw(){
    const fw1 = "'w1x1' + 'w1y1' + 'w1z1' + a";
    const fw2 = "'w2x2' + 'w2y2' + 'w2z2' + b";
    const fw3 = "'w3x1' + 'w3y1' + 'w3z1' + c";
    const fw4 = "'w1'x2' + 'w1'y2' + 'w1'z2' + d";
    const fw5 = "'w2'x1' + 'w2'y1' + 'w2'z1' + e";
    const fw6 = "'w3'x2' + 'w3'y2' + 'w3'z2' + f";
}
//David Hilbert 13 equation
void gw(){
    const gw1 = "'w1 ^ 7' + a * 'w1 ^ 3' + b * 'w1 ^ 2' + c * 'w1' + A";
    const gw2 = "'w2 ^ 7' + a * 'w2 ^ 3' + b * 'w2 ^ 2' + c * 'w2' + B";
    const gw3 = "'w3 ^ 7' + a * 'w3 ^ 3' + b * 'w3 ^ 2' + c * 'w3' + C";
    const gw4 = "'w1' ^ 7' + d * 'w1' ^ 3' + e * 'w1' ^ 2' + f * 'w1'' + D";
    const gw5 = "'w2' ^ 7' + d * 'w2' ^ 3' + e * 'w2' ^ 2' + f * 'w2'' + E";
    const gw6 = "'w3' ^ 7' + d * 'w3' ^ 3' + e * 'w3' ^ 2' + f * 'w3'' + F";    
}

//linear algebra
signed fxyz(a,b,c,d,e,f,fw){
    static const fx1 = 'a * x1' + 'b * x1' + 'c * x1' + 'd * x1' + 'e * x1' + 'fw1';
    static const fx2 = 'a * x2' + 'b * x2' + 'c * x2' + 'd * x2' + 'e * x2' + 'fw2';
    static const fy1 = 'a * y1' + 'b * y1' + 'c * y1' + 'd * y1' + 'e * y1' + 'fw3';
    static const fy2 = 'a * y2' + 'b * y2' + 'c * y2' + 'd * y2' + 'e * y2' + 'fw4';
    static const fz1 = 'a * z1' + 'b * z1' + 'c * z1' + 'd * x1' + 'e * y1' + 'fw5';
    static const fz2 = 'a * z2' + 'b * z2' + 'c * z2' + 'd * z2' + 'e * z2' + 'fw6';
}
//five square equation
unsigned gxyz(gw){
    static const gx1 = 'A * x1^5' + 'B * x1^4' + 'C * x1^3' + 'D * x1^2' + 'E * x1' + 'gw1';
    static const gx2 = 'A * x2^5' + 'B * x2^4' + 'C * x2^3' + 'D * x2^2' + 'E * x2' + 'gw2'; 
    static const gy1 = 'A * y1^5' + 'B * y1^4' + 'C * y1^3' + 'D * y1^2' + 'E * y1' + 'gw3';
    static const gy2 = 'A * y2^5' + 'B * y2^4' + 'C * y2^3' + 'D * y2^2' + 'E * y2' + 'gw4';
    static const gz1 = 'A * z1^5' + 'B * z1^4' + 'C * z1^3' + 'D * x1^2' + 'E * y1' + 'gw5';
    static const gz2 = 'A * z2^5' + 'B * z2^4' + 'C * z2^3' + 'D * z2^2' + 'E * z2' + 'gw6';
}
