printf      proto
includelib  msvcrt.lib
includelib  legacy_stdio_definitions.lib

.data
        msg db 'Hello, World!', 0

.code
main    proc
        sub rsp, 40h
        mov rcx, offset msg
        call printf
        add rsp, 40h
        ret
main    endp
        end