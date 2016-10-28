echo Kyle Quinn

yacc -d -v ada.y
lex ada.l
/usr/bin/gcc lex.yy.c y.tab.c -o ada -ll -ly

echo decls
./ada < Gdecls.ada
echo except
./ada < Gexcept.ada
echo given
./ada < Ggiven.ada
echo nestelsif
./ada < GnestElsif.ada
echo proc
./ada < Gproc.ada
echo simple
./ada < Gsimple.ada