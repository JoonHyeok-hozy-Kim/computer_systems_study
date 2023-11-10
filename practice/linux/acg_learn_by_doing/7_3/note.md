[Back to Linux Main](../main.md)

# Vim

### Normal Mode
- 좌하상우: hjkl
- 다음 단어 시작 : w 
- 이전 안어 시작 : b 
- 다음 단어 끝 : e
- 줄 시작 : 0
- 줄 끝 : $
- 스크롤 up : ctrl + u
- 스크롤 down : ctrl + d
- 화면 상단 : h
- 화면 중간 : m
- 화면 아래 : l
- 현재 줄에서 X 찾기 : fX
- 줄 만들고 insert mode : o
- Undo : u
- Redo : ctrl + r
- 단어 삭제 : dw
- 줄삭제 : dd
- 문자 삭제 : x
- Copy line : yy
- Copy word : yw
- Paste : p
- 드래그 상하좌우 : v + {jkhl}
- 줄전체 드래그 : vv
- 대소문자 : ~
- 커맨드 N번 반복 : N + 커맨드
- 내용 찾기 : /내용

- (1) i (2) : (2) 안을 (1) 하기
  - ex) ci[ : [] 안의 내용 바꾸기
- (1) a (2) : (2) 를 (1) 하기
  - ex) ci[ : [] 안의 내용 바꾸기

<br>

#### Other Modes
- Insert Mode : i
- Replace Mode : R
- Visual Mode : v
  - Visual Line : shift+v
  - Visual Block : ctrl+v
- Command Line Mode
  |cmd|meaning|
  |:--|:------|
  |:q|quit|
  |:qa|quit all|
  |:w|write|
  |:wq|write and quit|
  |:help [cmd]|help about the command|
  |:sp|See the same file in many screens|


<br>

[Back to Linux Main](../main.md)