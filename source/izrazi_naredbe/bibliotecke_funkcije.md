# Стандардне библиотечке функције

Програмски језик C нуди велики избор **стандардних библиотечких функција**.
Библиотечке функције можеш посматрати као потпрограме за често коришћене радње
које су творци програмског језика C написали за тебе. На почетку овог поглавља
научио си да се заглавља стандардне библиотеке програмског језика C прикључују
програму директивом `#include` након чега се наводи име стандардне библиотеке
са екстензијом `.h` у изломљеним заградама.

До сада си користио само заглавље стандардног улаза/излаза `stdio.h`, а у овој
лекцији научићеш понешто и о осталим библиотекама и функцијама које су у њима
дефинисане, а које могу да ти олакшају рад.

У наставку следи списак доступних заглавља са кратким описом. Нека заглавља
нису била део оригиналне стандардне библиотеке програмског језика C, већ су
уведена у каснијим C стандарднима. Та заглавља су означена именом стандарда
којим су уведена, а свакако неће бити коришћена приликом израде задатака у
овом курсу. Са заглављима која су подебљана сусрећеш се ове или следеће школске
године.

- **`ctype.h`, рад са карактерима,**,
- **`float.h`, ограничења типова са покретном тачком**,
- **`limits.h`, ограничења целобројних типова**,
- **`math.h`, математичке функције**,
- **`stdio.h`, стандардни улаз/излаз**,
- **`stdlib.h`, стандардне корисничке функције**,
- **`string.h`, рад са стринговима**,
- **`time.h`, рад са временом и датумом**,
- `assert.h`, откривање грешака,
- `complex.h` (C99), аритметика комплексних бројева,
- `errno.h`, извештавање о грешкама,
- `fenv.h` (C99), контрола окружења за типове са покретном тачком,
- `inttypes.h` (C99), конверзије целобројних формата,
- `iso646.h` (C95), алтернативни запис оператора,
- `locale.h`, функције за локализацију,
- `setjmp.h`, излазак из не-локалних токова програма,
- `signal.h`, контрола програма и ресурса,
- `stdalign.h` (C11), поравнања структура података,
- `stdarg.h`, рад са аргументима функција,
- `stdatomic.h` (C11), операције са подацима у нитима,
- `stdbit.h` (C23), рад са битовима и бајтовима,
- `stdbool.h` (C99), дефиниција логичког типа,
- `stdckdint.h` (C23), проверена целобројна аритметика,
- `stddef.h`, дефиниције типова,
- `stdint.h` (C99), дефиниције нових целобројних типова,
- `stdnoreturn.h` (C11), рад са функцијама које ништа не враћају
- `tgmath.h` (C99), генеричке математичке функције
- `threads.h` (C11), рад са нитима
- `uchar.h` (C11), рад са UNICODE карактерима,
- `wchar.h` (C95), рад са широким карактерима и
- `wctype.h` (C95), одређивање типова широких карактера.
