default rel

global getDelta


SECTION .text 

getDelta:
        push    rbp                                     ; 0000 _ 55
        mov     rbp, rsp                                ; 0001 _ 48: 89. E5
        movss   dword [rbp-14H], xmm0                   ; 0004 _ F3: 0F 11. 45, EC
        movss   dword [rbp-18H], xmm1                   ; 0009 _ F3: 0F 11. 4D, E8
        movss   dword [rbp-1CH], xmm2                   ; 000E _ F3: 0F 11. 55, E4
        movss   xmm0, dword [rbp-18H]                   ; 0013 _ F3: 0F 10. 45, E8
        mulss   xmm0, dword [rbp-18H]                   ; 0018 _ F3: 0F 59. 45, E8
        movss   xmm2, dword [rbp-14H]                   ; 001D _ F3: 0F 10. 55, EC
        mulss   xmm1, xmm2                              ; 002A _ F3: 0F 59. CA
        mulss   xmm1, dword [rbp-1CH]                   ; 002E _ F3: 0F 59. 4D, E4
        subss   xmm0, xmm1                              ; 0033 _ F3: 0F 5C. C1
        movss   dword [rbp-4H], xmm0                    ; 0037 _ F3: 0F 11. 45, FC
        movss   xmm0, dword [rbp-4H]                    ; 003C _ F3: 0F 10. 45, FC
        pop     rbp                                     ; 0041 _ 5D
        ret                                             ; 0042 _ C3
; getDelta End of function



