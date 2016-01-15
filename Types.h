#ifndef TYPES_H_
#define TYPES_H_

typedef unsigned char byte;
typedef unsigned short word;

typedef union {
    struct {
        byte low;
        byte hi;
    };
    word value;
} Register;

typedef union {
    struct {
        int red;
        int green;
        int blue;
    };
} RGB;

enum TMA_CYCLES {
    TMA_4096 = 1024,
    TMA_16384 = 256,
    TMA_65536 = 64,
    TMA_262144 = 16
};

const byte SPECIAL_OPCODE = 0xCB;
const word DIV_REGISTER = 0xFF04;
const word TIMA = 0xFF05;
const word TMA = 0xFF06;
const word TAC = 0xFF07;
const word IE_REGISTER = 0xFFFF;
const word IF_REGISTER = 0xFF0F;

const byte initialValuesForFFXX[256] = {
    0xCF, 0x00, 0x7E, 0xFF, 0xD3, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE1,
    0x80, 0xBF, 0xF3, 0xFF, 0xBF, 0xFF, 0x3F, 0x00, 0xFF, 0xBF, 0x7F, 0xFF, 0x9F, 0xFF, 0xBF, 0xFF,
    0xFF, 0x00, 0x00, 0xBF, 0x77, 0xF3, 0xF1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x71, 0x72, 0xD5, 0x91, 0x58, 0xBB, 0x2A, 0xFA, 0xCF, 0x3C, 0x54, 0x75, 0x48, 0xCF, 0x8F, 0xD9,
    0x91, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFC, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x2B, 0x0B, 0x64, 0x2F, 0xAF, 0x15, 0x60, 0x6D, 0x61, 0x4E, 0xAC, 0x45, 0x0F, 0xDA, 0x92, 0xF3,
    0x83, 0x38, 0xE4, 0x4E, 0xA7, 0x6C, 0x38, 0x58, 0xBE, 0xEA, 0xE5, 0x81, 0xB4, 0xCB, 0xBF, 0x7B,
    0x59, 0xAD, 0x50, 0x13, 0x5E, 0xF6, 0xB3, 0xC1, 0xDC, 0xDF, 0x9E, 0x68, 0xD7, 0x59, 0x26, 0xF3,
    0x62, 0x54, 0xF8, 0x36, 0xB7, 0x78, 0x6A, 0x22, 0xA7, 0xDD, 0x88, 0x15, 0xCA, 0x96, 0x39, 0xD3,
    0xE6, 0x55, 0x6E, 0xEA, 0x90, 0x76, 0xB8, 0xFF, 0x50, 0xCD, 0xB5, 0x1B, 0x1F, 0xA5, 0x4D, 0x2E,
    0xB4, 0x09, 0x47, 0x8A, 0xC4, 0x5A, 0x8C, 0x4E, 0xE7, 0x29, 0x50, 0x88, 0xA8, 0x66, 0x85, 0x4B,
    0xAA, 0x38, 0xE7, 0x6B, 0x45, 0x3E, 0x30, 0x37, 0xBA, 0xC5, 0x31, 0xF2, 0x71, 0xB4, 0xCF, 0x29,
    0xBC, 0x7F, 0x7E, 0xD0, 0xC7, 0xC3, 0xBD, 0xCF, 0x59, 0xEA, 0x39, 0x01, 0x2E, 0x00, 0x69, 0x00
};

const byte nintendoTitle[256] = {
    0x31, 0xFE, 0xFF, 0xAF, 0x21, 0xFF, 0x9F, 0x32, 0xCB, 0x7C, 0x20, 0xFB, 0x21, 0x26, 0xFF, 0x0E,
    0x11, 0x3E, 0x80, 0x32, 0xE2, 0x0C, 0x3E, 0xF3, 0xE2, 0x32, 0x3E, 0x77, 0x77, 0x3E, 0xFC, 0xE0,
    0x47, 0x11, 0x04, 0x01, 0x21, 0x10, 0x80, 0x1A, 0xCD, 0x95, 0x00, 0xCD, 0x96, 0x00, 0x13, 0x7B,
    0xFE, 0x34, 0x20, 0xF3, 0x11, 0xD8, 0x00, 0x06, 0x08, 0x1A, 0x13, 0x22, 0x23, 0x05, 0x20, 0xF9,
    0x3E, 0x19, 0xEA, 0x10, 0x99, 0x21, 0x2F, 0x99, 0x0E, 0x0C, 0x3D, 0x28, 0x08, 0x32, 0x0D, 0x20,
    0xF9, 0x2E, 0x0F, 0x18, 0xF3, 0x67, 0x3E, 0x64, 0x57, 0xE0, 0x42, 0x3E, 0x91, 0xE0, 0x40, 0x04,
    0x1E, 0x02, 0x0E, 0x0C, 0xF0, 0x44, 0xFE, 0x90, 0x20, 0xFA, 0x0D, 0x20, 0xF7, 0x1D, 0x20, 0xF2,
    0x0E, 0x13, 0x24, 0x7C, 0x1E, 0x83, 0xFE, 0x62, 0x28, 0x06, 0x1E, 0xC1, 0xFE, 0x64, 0x20, 0x06,
    0x7B, 0xE2, 0x0C, 0x3E, 0x87, 0xE2, 0xF0, 0x42, 0x90, 0xE0, 0x42, 0x15, 0x20, 0xD2, 0x05, 0x20,
    0x4F, 0x16, 0x20, 0x18, 0xCB, 0x4F, 0x06, 0x04, 0xC5, 0xCB, 0x11, 0x17, 0xC1, 0xCB, 0x11, 0x17,
    0x05, 0x20, 0xF5, 0x22, 0x23, 0x22, 0x23, 0xC9, 0xCE, 0xED, 0x66, 0x66, 0xCC, 0x0D, 0x00, 0x0B,
    0x03, 0x73, 0x00, 0x83, 0x00, 0x0C, 0x00, 0x0D, 0x00, 0x08, 0x11, 0x1F, 0x88, 0x89, 0x00, 0x0E,
    0xDC, 0xCC, 0x6E, 0xE6, 0xDD, 0xDD, 0xD9, 0x99, 0xBB, 0xBB, 0x67, 0x63, 0x6E, 0x0E, 0xEC, 0xCC,
    0xDD, 0xDC, 0x99, 0x9F, 0xBB, 0xB9, 0x33, 0x3E, 0x3C, 0x42, 0xB9, 0xA5, 0xB9, 0xA5, 0x42, 0x3C,
    0x21, 0x04, 0x01, 0x11, 0xA8, 0x00, 0x1A, 0x13, 0xBE, 0x00, 0x00, 0x23, 0x7D, 0xFE, 0x34, 0x20,
    0xF5, 0x06, 0x19, 0x78, 0x86, 0x23, 0x05, 0x20, 0xFB, 0x86, 0x00, 0x00, 0x3E, 0x01, 0xE0, 0x50
};

static const char* opcodeNames[256] = {
    "NOP",
    "LD BC,nn",
    "LD (BC),A",
    "INC BC",
    "INC B",
    "DEC B",
    "LD B,n",
    "RLCA",
    "LD (nn),SP",
    "ADD HL,BC",
    "LD A,(BC)",
    "DEC BC",
    "INC C",
    "DEC C",
    "LD C,n",
    "RRCA",
    
    "STOP",
    "LD DE,nn",
    "LD (DE),A",
    "INC DE",
    "INC D",
    "DEC D",
    "LD D,n",
    "RLA",
    "JR n",
    "ADD HL,DE",
    "LD A,(DE)",
    "DEC DE",
    "INC E",
    "DEC E",
    "LD E,n",
    "RRA",
    
    "JR NZ,n",
    "LD HL,nn",
    "LD (HLI),A",
    "INC HL",
    "INC H",
    "DEC H",
    "LD H,n",
    "DAA",
    "JR Z,n",
    "ADD HL,HL",
    "LD A,(HLI)",
    "DEC HL",
    "INC L",
    "DEC L",
    "LD L,n",
    "CPL",
    
    "JR NC,n",
    "LD SP,nn",
    "LD (HLD),A",
    "INC SP",
    "INC (HL)",
    "DEC (HL)",
    "LD (HL),n",
    "SCF",
    "JR C,n",
    "ADD HL,SP",
    "LD A,(HLD)",
    "DEC SP",
    "INC A",
    "DEC A",
    "LDA,n",
    "CCF",
    
    "LD B,B",
    "LD B,C",
    "LD B,D",
    "LD B,E",
    "LD B,H",
    "LD B,L",
    "LD B,(HL)",
    "LD B,A",
    "LD C,B",
    "LD C,C",
    "LD C,D",
    "LD C,E",
    "LD C,H",
    "LD C,L",
    "LD C,(HL)",
    "LD C,A",
    
    "LD D,B",
    "LD D,C",
    "LD D,D",
    "LD D,E",
    "LD D,H",
    "LD D,L",
    "LD D,(HL)",
    "LD D,A",
    "LD E,B",
    "LD E,C",
    "LD E,D",
    "LD E,E",
    "LD E,H",
    "LD E,L",
    "LD E,(HL)",
    "LD E,A",
    
    "LD H,B",
    "LD H,C",
    "LD H,D",
    "LD H,E",
    "LD H,H",
    "LD H,L",
    "LD H,(HL)",
    "LD H,A",
    "LD L,B",
    "LD L,C",
    "LD L,D",
    "LD L,E",
    "LD L,H",
    "LD L,L",
    "LD L,(HL)",
    "LD L,A",
    
    "LD (HL),B",
    "LD (HL),C",
    "LD (HL),D",
    "LD (HL),E",
    "LD (HL),H",
    "LD (HL),L",
    "HALT",
    "LD (HL),A",
    "LD A,B",
    "LD A,C",
    "LD A,D",
    "LD A,E",
    "LD A,H",
    "LD A,L",
    "LD A,(HL)",
    "LD A,A",
    
    "ADD A,B",
    "ADD A,C",
    "ADD A,D",
    "ADD A,E",
    "ADD A,H",
    "ADD A,L",
    "ADD A,(HL)",
    "ADD A,A",
    "ADC A,B",
    "ADC A,C",
    "ADC A,D",
    "ADC A,E",
    "ADC A,H",
    "ADC A,L",
    "ADC A,(HL)",
    "ADC A,A",
    
    "SUB B",
    "SUB C",
    "SUB D",
    "SUB E",
    "SUB H",
    "SUB L",
    "SUB (HL)",
    "SUB A",
    "SBC A,B",
    "SBC A,C",
    "SBC A,D",
    "SBC A,E",
    "SBC A,H",
    "SBC A,L",
    "SBC A,(HL)",
    "SBC A,A",
    
    "AND B",
    "AND C",
    "AND D",
    "AND E",
    "AND H",
    "AND L",
    "AND (HL)",
    "AND A",
    "XOR B",
    "XOR C",
    "XOR D",
    "XOR E",
    "XOR H",
    "XOR L",
    "XOR (HL)",
    "XOR A",
    
    "OR B",
    "OR C",
    "OR D",
    "OR E",
    "OR H",
    "OR L",
    "OR (HL)",
    "OR A",
    "CP B",
    "CP C",
    "CP D",
    "CP E",
    "CP H",
    "CP L",
    "CP (HL)",
    "CP A",
    
    "RET NZ",
    "POP BC",
    "JP NZ,nn",
    "JP nn",
    "CALL NZ,nn",
    "PUSH BC",
    "ADD A,n",
    "RST ",
    "RET Z",
    "RET",
    "JP Z,nn",
    "cb opcode",
    "CALL Z,nn",
    "CALL nn",
    "ADC A,n",
    "RST 0x08",
    
    "RET NC",
    "POP DE",
    "JP NC,nn",
    "unused opcode",
    "CALL NC,nn",
    "PUSH DE",
    "SUB n",
    "RST 0x10",
    "RET C",
    "RETI",
    "JP C,nn",
    "unused opcode",
    "CALL C,nn",
    "unused opcode",
    "SBC A,n",
    "RST 0x18",
    
    "LD (0xFF00+n),A",
    "POP HL",
    "LD (0xFF00+C),A",
    "unused opcode",
    "unused opcode",
    "PUSH HL",
    "AND n",
    "RST 0x20",
    "ADD SP,n",
    "JP (HL)",
    "LD (nn),A",
    "unused opcode",
    "unused opcode",
    "unused opcode",
    "XOR n",
    "RST 0x28",
    
    "LD A,(0xFF00+n)",
    "POP AF",
    "LD A,(0xFF00+C)",
    "DI",
    "unused opcode",
    "PUSH AF",
    "OR n",
    "RST 0x30",
    "LD HL,SP",
    "LD SP,HL",
    "LD A,(nn)",
    "EI",
    "unused opcode",
    "unused opcode",
    "CP n",
    "RST 0x38"
};

static const char* specialOpcodeNames[256] = {
    "RLC B",
    "RLC C",
    "RLC D",
    "RLC E",
    "RLC H",
    "RLC L",
    "RLC (HL)",
    "RLC A",
    "RRC B",
    "RRC C",
    "RRC D",
    "RRC E",
    "RRC H",
    "RRC L",
    "RRC (HL)",
    "RRC A",
    
    "RL B",
    "RL C",
    "RL D",
    "RL E",
    "RL H",
    "RL L ",
    "RL (HL)",
    "RL A",
    "RR B",
    "RR C",
    "RR D",
    "RR E",
    "RR H",
    "RR L",
    "RR (HL)",
    "RR A",
    
    "SLA B",
    "SLA C",
    "SLA D",
    "SLA E",
    "SLA H",
    "SLA L",
    "SLA (HL)",
    "SLA A",
    "SRA B",
    "SRA C",
    "SRA D",
    "SRA E",
    "SRA H",
    "SRA L",
    "SRA (HL)",
    "SRA A",
    
    "SWAP B",
    "SWAP C",
    "SWAP D",
    "SWAP E",
    "SWAP H",
    "SWAP L",
    "SWAP (HL)",
    "SWAP A",
    "SRL B",
    "SRL C",
    "SRL D",
    "SRL E",
    "SRL H",
    "SRL L",
    "SRL (HL)",
    "SRL A",
    
    "BIT 0 B",
    "BIT 0 C",
    "BIT 0 D",
    "BIT 0 E",
    "BIT 0 H",
    "BIT 0 L",
    "BIT 0 (HL)",
    "BIT 0 A",
    "BIT 1 B",
    "BIT 1 C",
    "BIT 1 D",
    "BIT 1 E",
    "BIT 1 H",
    "BIT 1 L",
    "BIT 1 (HL)",
    "BIT 1 A",
    
    "BIT 2 B",
    "BIT 2 C",
    "BIT 2 D",
    "BIT 2 E",
    "BIT 2 H",
    "BIT 2 L",
    "BIT 2 (HL)",
    "BIT 2 A",
    "BIT 3 B",
    "BIT 3 C",
    "BIT 3 D",
    "BIT 3 E",
    "BIT 3 H",
    "BIT 3 L",
    "BIT 3 (HL)",
    "BIT 3 A",
    
    "BIT 4 B",
    "BIT 4 C",
    "BIT 4 D",
    "BIT 4 E",
    "BIT 4 H",
    "BIT 4 L",
    "BIT 4 (HL)",
    "BIT 4 A",
    "BIT 5 B",
    "BIT 5 C",
    "BIT 5 D",
    "BIT 5 E",
    "BIT 5 H",
    "BIT 5 L",
    "BIT 5 (HL)",
    "BIT 5 A",
    
    "BIT 6 B",
    "BIT 6 C",
    "BIT 6 D",
    "BIT 6 E",
    "BIT 6 H",
    "BIT 6 L",
    "BIT 6 (HL)",
    "BIT 6 A",
    "BIT 7 B",
    "BIT 7 C",
    "BIT 7 D",
    "BIT 7 E",
    "BIT 7 H",
    "BIT 7 L",
    "BIT 7 (HL)",
    "BIT 7 A",
    
    "RES 0 B",
    "RES 0 C",
    "RES 0 D",
    "RES 0 E",
    "RES 0 H",
    "RES 0 L",
    "RES 0 (HL)",
    "RES 0 A",
    "RES 1 B",
    "RES 1 C",
    "RES 1 D",
    "RES 1 E",
    "RES 1 H",
    "RES 1 L",
    "RES 1 (HL)",
    "RES 1 A",
    
    "RES 2 B",
    "RES 2 C",
    "RES 2 D",
    "RES 2 E",
    "RES 2 H",
    "RES 2 L",
    "RES 2 (HL)",
    "RES 2 A",
    "RES 3 B",
    "RES 3 C",
    "RES 3 D",
    "RES 3 E",
    "RES 3 H",
    "RES 3 L",
    "RES 3 (HL)",
    "RES 3 A",
    
    "RES 4 B",
    "RES 4 C",
    "RES 4 D",
    "RES 4 E",
    "RES 4 H",
    "RES 4 L",
    "RES 4 (HL)",
    "RES 4 A",
    "RES 5 B",
    "RES 5 C",
    "RES 5 D",
    "RES 5 E",
    "RES 5 H",
    "RES 5 L",
    "RES 5 (HL)",
    "RES 5 A",
    
    "RES 6 B",
    "RES 6 C",
    "RES 6 D",
    "RES 6 E",
    "RES 6 H",
    "RES 6 L",
    "RES 6 (HL)",
    "RES 6 A",
    "RES 7 B",
    "RES 7 C",
    "RES 7 D",
    "RES 7 E",
    "RES 7 H",
    "RES 7 L",
    "RES 7 (HL)",
    "RES 7 A",
    
    "SET 0 B",
    "SET 0 C",
    "SET 0 D",
    "SET 0 E",
    "SET 0 H",
    "SET 0 L",
    "SET 0 (HL)",
    "SET 0 A",
    "SET 1 B",
    "SET 1 C",
    "SET 1 D",
    "SET 1 E",
    "SET 1 H",
    "SET 1 L",
    "SET 1 (HL)",
    "SET 1 A",
    
    "SET 2 B",
    "SET 2 C",
    "SET 2 D",
    "SET 2 E",
    "SET 2 H",
    "SET 2 L",
    "SET 2 (HL)",
    "SET 2 A",
    "SET 3 B",
    "SET 3 C",
    "SET 3 D",
    "SET 3 E",
    "SET 3 H",
    "SET 3 L",
    "SET 3 (HL)",
    "SET 3 A",
    
    "SET 4 B",
    "SET 4 C",
    "SET 4 D",
    "SET 4 E",
    "SET 4 H",
    "SET 4 L",
    "SET 4 (HL)",
    "SET 4 A",
    "SET 5 B",
    "SET 5 C",
    "SET 5 D",
    "SET 5 E",
    "SET 5 H",
    "SET 5 L",
    "SET 5 (HL)",
    "SET 5 A",
    
    "SET 6 B",
    "SET 6 C",
    "SET 6 D",
    "SET 6 E",
    "SET 6 H",
    "SET 6 L",
    "SET 6 (HL)",
    "SET 6 A",
    "SET 7 B",
    "SET 7 C",
    "SET 7 D",
    "SET 7 E",
    "SET 7 H",
    "SET 7 L",
    "SET 7 (HL)",
    "SET 7 A"
};

#endif