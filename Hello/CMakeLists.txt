

#
# điều kiện về version
#
cmake_minimum_required(VERSION 2.8.12)

#
# Tên Project
#
project (helloworld)

#
# Khai báo thư mục chứa file header (.h)
#
include_directories(include)

#
#thêm từ  file nguồn bằng lệnh *set*
#
#set (SOURCES src/main.c  src/greeting_en.c src/greeting_vi.c src/greeting_jp.c)

#
# Thêm một tập các file bằng một bộ lọc trong thư mục chứa sourrce
# Đây là cách nhanh và phổ biến hơn 
#
file(GLOB SOURCES "src/*.c" )




#
# định nghĩa sự liên quan giữa file chạy và file nguồn
#
add_executable(helloworld ${SOURCES})
