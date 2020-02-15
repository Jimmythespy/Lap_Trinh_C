# ENUMERATION trong C:
----------------------------
- Từ khóa enum trong C được sử dụng để khai báo một loại enumeration, loại enumeration là một kiểu dữ liệu đặc biệt được dùng định nghĩa trong C. Từ khóa enum cho ta một công cụ để đặt tên một tập hợp hữu hạn và khai báo các định danh (identifier) trong một tập hợp.

- Syntax: 

 khai báo một enum: enum enum_name (const 1, const 2, const 3.....);
 
 khai bóa biến mang kiểu enum: enum enum_name (indentifier);
 
- Từ khóa:

enum enum_name: a data type.

enmu_name     : tag.

   - Tag có thể có hoặc không: nếu không có chỉ có thể khai biến luôn, bởi nếu không có tên enum ta không thể khai báo biến với kiểu dữ liệu đó được
   
const n       : enumerators (identifier): mỗi enumerator là một hằng thuộc kiểu dữ liệu int

   - giá trị của mỗi hằng này tăng đều 1 từ trái qua phải và bắt đầu từ 0;
     VD:  enum: enum enum_name (const 1, const 2, const 3.....);
          const 1=0 ,const 2=1, const 3=2......
   - Các enumerators này cũng có thể được initialise
     VD: enum enum_name (const 1=1, const 2,......);
     lúc này const 2 = 2
   - Giá trị của các enumerators này có thể giống nhau.
   - Tên của các enumerators và tên biến phải khác nhau.
-----------------------
# Lý do cần có enum:
- Trong các vấn đề khác nhau ta có nhiều kiểu dữ liệu khác nhau.
- Giảm nhầm lẫn trong việc viết code và sửa code.
- Code dễ đọc hơn.
     
      

