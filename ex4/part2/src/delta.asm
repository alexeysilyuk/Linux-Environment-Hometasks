default rel

global getDelta: 

SECTION .text   align=1

getDelta:; Function begin
        push    rbp                                     ; 0000 _ 55
        mov     rbp, rsp                                ; 0001 _ 48: 89. E5
        movss   dword [rbp-4H], xmm0                    ; 0004 _ F3: 0F 11. 45, FC
        movss   dword [rbp-8H], xmm1                    ; 0009 _ F3: 0F 11. 4D, F8
        movss   dword [rbp-0CH], xmm2                   ; 000E _ F3: 0F 11. 55, F4
        movss   xmm0, dword [rbp-8H]                    ; 0013 _ F3: 0F 10. 45, F8
        mulss   xmm0, dword [rbp-8H]                    ; 0018 _ F3: 0F 59. 45, F8
        movss   xmm2, dword [rbp-4H]                    ; 001D _ F3: 0F 10. 55, FC
        movss   xmm1, dword [rel ?_001]                 ; 0022 _ F3: 0F 10. 0D, 00000000(rel)
        mulss   xmm1, xmm2                              ; 002A _ F3: 0F 59. CA
        mulss   xmm1, dword [rbp-0CH]                   ; 002E _ F3: 0F 59. 4D, F4
        subss   xmm0, xmm1                              ; 0033 _ F3: 0F 5C. C1
        pop     rbp                                     ; 0037 _ 5D
        ret                                             ; 0038 _ C3
; getDelta End of function

SECTION .rodata align=4

?_001:                                                  ; dword
        dd 40800000H                                    ; 0000 _ 4.0 





