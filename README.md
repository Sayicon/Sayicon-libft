<div align="center">

# libft

**C standart kütüphanesi fonksiyonlarının sıfırdan yeniden yazımı — 42 müfredatının ilk projesi.**

[![Language](https://img.shields.io/badge/language-C-00599C?style=for-the-badge&logo=c)](https://en.wikipedia.org/wiki/C_(programming_language))
[![School](https://img.shields.io/badge/42-Kocaeli-00BABC?style=for-the-badge)](https://42kocaeli.com.tr/)
[![Norm](https://img.shields.io/badge/norminette-passing-brightgreen?style=for-the-badge)](https://github.com/42School/norminette)

</div>

---

## Proje Hakkında

`libft`, 42 Kocaeli müfredatındaki ilk projedir. Amaç, C'nin `<string.h>`, `<ctype.h>`, `<stdlib.h>` başlıklarında bulunan standart fonksiyonları sıfırdan yazarak nasıl çalıştıklarını öğrenmektir. Oluşturulan `libft.a` kütüphanesi, ilerleyen tüm 42 projelerinde (ft_printf, get_next_line, push_swap vb.) kullanılmaktadır.

---

## Kurulum

```bash
# Klonla
git clone https://github.com/Sayicon/Sayicon-libft.git
cd Sayicon-libft

# Kütüphaneyi derle
make          # libft.a oluşturur
make bonus    # linked list fonksiyonlarını da ekler

# Temizlik
make clean    # .o dosyaları
make fclean   # .o + libft.a
make re       # yeniden derle
```

---

## Kütüphaneyi Kendi Projenizde Kullanma

```c
#include "libft.h"

int main(void)
{
    char    *str;
    char    **split;
    int     i;

    str = ft_strdup("Merhaba 42!");
    ft_putendl_fd(str, 1);           // "Merhaba 42!" + newline

    split = ft_split("a,b,c,d", ',');
    i = 0;
    while (split[i])
        ft_putendl_fd(split[i++], 1);

    ft_putstr_fd(ft_itoa(2024), 1);
    return (0);
}
```

```bash
gcc -Wall -Wextra -Werror main.c -L. -lft -o program
./program
```

---

## Fonksiyon Listesi

### Karakter Kontrol (`<ctype.h>`)

| Fonksiyon | Açıklama |
|-----------|----------|
| `ft_isalpha` | Harf mi? |
| `ft_isdigit` | Rakam mı? |
| `ft_isalnum` | Harf veya rakam mı? |
| `ft_isascii` | ASCII aralığında mı? (0–127) |
| `ft_isprint` | Yazdırılabilir karakter mi? |
| `ft_toupper` | Küçük harfi büyüğe çevir |
| `ft_tolower` | Büyük harfi küçüğe çevir |

---

### Bellek Fonksiyonları (`<string.h>` / `<strings.h>`)

| Fonksiyon | Açıklama |
|-----------|----------|
| `ft_memset` | Belleği belirtilen byte ile doldur |
| `ft_bzero` | Belleği sıfırla |
| `ft_memcpy` | Bellek bloğunu kopyala |
| `ft_memmove` | Çakışan bölgeler için güvenli kopyalama |
| `ft_memchr` | Bellekte karakter ara |
| `ft_memcmp` | İki bellek bloğunu karşılaştır |
| `ft_calloc` | Sıfırlanmış bellek tahsisi |

---

### String Fonksiyonları

| Fonksiyon | Açıklama |
|-----------|----------|
| `ft_strlen` | String uzunluğunu döndür |
| `ft_strlcpy` | Boyut sınırlı güvenli kopyalama |
| `ft_strlcat` | Boyut sınırlı güvenli birleştirme |
| `ft_strchr` | String'de karakter ara (baştan) |
| `ft_strrchr` | String'de karakter ara (sondan) |
| `ft_strncmp` | İki string'i n karakter kadar karşılaştır |
| `ft_strnstr` | String içinde alt string ara |
| `ft_strdup` | String'i heap'e kopyala |

---

### Ek String Fonksiyonları (42 özgün)

| Fonksiyon | Açıklama |
|-----------|----------|
| `ft_substr` | String'den alt string çıkar |
| `ft_strjoin` | İki string'i birleştir (yeni string döner) |
| `ft_strtrim` | String'in başından/sonundan karakter sil |
| `ft_split` | String'i ayırıcıya göre parçala (string dizisi döner) |
| `ft_strmapi` | Her karaktere fonksiyon uygula (yeni string) |
| `ft_striteri` | Her karaktere fonksiyon uygula (yerinde) |

---

### Dönüşüm Fonksiyonları

| Fonksiyon | Açıklama |
|-----------|----------|
| `ft_atoi` | String'i tamsayıya çevir |
| `ft_itoa` | Tamsayıyı string'e çevir |

---

### Çıktı Fonksiyonları

| Fonksiyon | Açıklama |
|-----------|----------|
| `ft_putchar_fd` | Karakteri belirtilen fd'ye yaz |
| `ft_putstr_fd` | String'i belirtilen fd'ye yaz |
| `ft_putendl_fd` | String + newline'ı fd'ye yaz |
| `ft_putnbr_fd` | Tamsayıyı fd'ye yaz |

---

### Bonus: Bağlı Liste (Linked List)

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Fonksiyon | Açıklama |
|-----------|----------|
| `ft_lstnew` | Yeni düğüm oluştur |
| `ft_lstadd_front` | Listenin başına düğüm ekle |
| `ft_lstadd_back` | Listenin sonuna düğüm ekle |
| `ft_lstsize` | Liste uzunluğunu döndür |
| `ft_lstlast` | Son düğümü döndür |
| `ft_lstdelone` | Tek düğümü sil |
| `ft_lstclear` | Tüm listeyi temizle |
| `ft_lstiter` | Her düğüme fonksiyon uygula |
| `ft_lstmap` | Her düğüme fonksiyon uygulayarak yeni liste oluştur |

---

## Test

```bash
# Test binary oluştur ve çalıştır
make test
./program
```

---

## Bu Kütüphaneyi Kullanan Diğer Projeler

- [ft_printf](https://github.com/Sayicon/ft_printf) — printf yeniden uygulaması
- [get_next_line](https://github.com/Sayicon/get_next_line) — satır okuyucu
- [push_swap](https://github.com/Sayicon/push_swap) — stack sıralama

---

<div align="center">

*42 Kocaeli — libft projesi (Birinci halka)*

[![GitHub](https://img.shields.io/badge/GitHub-Sayicon-181717?style=flat-square&logo=github)](https://github.com/Sayicon)

</div>
