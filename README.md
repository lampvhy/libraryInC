--Su dung CMake : 
$cmake .
$make

-Các bước tạo thư viện liên kết tĩnh
Bước 1: -Xây dựng các file thư viện chứa các hàm.Ví dụ: tv1.c, tv2.c
        -Xây dựng file chương trình ct.c gọi các hàm trong các file thư viện.
Bước 2: Biên dịch các file thư viện thành file đối tượng (.o) theo cú pháp:
      $ gcc –c  tên các file.c
       Ví dụ: $ gcc –c tv1.c tv2.c
Bước 3: Biên dịch và đóng gói các file đối tượng (.o) thành file thư viện (.a) theo cú pháp:
 $ ar cvr Thư_viện.a Các_file.o
 Ví dụ: $ ar cvr libtv.a tv1.o tv2.o
Bước 4: Biên dịch file chương trình sử dụng TV libtv.a
$gcc Tên_CT.c –o Tên_CT_Thực_thi  lib_TênTV.a
Ví dụ: $gcc ct.c –o ct  libtv.a
Bước 5: Gọi thực thi chương trình theo cú pháp:
   $./ Tên_CT_Thực_thi
     Ví dụ: $./ct
