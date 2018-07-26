sy on
map <F3> <ESC>:exec "set nu!"<CR>
set paste
set ai
set ff=unix
set nu
set mouse=a
map <F2> <ESC>:exec &mouse!=""? "set mouse=" : "set mouse=nv"<CR>
function! s:insert_gates()
	let gatename = substitute(toupper(expand("%:t")), "\\.", "_", "g")
	execute "normal! i#ifndef " . gatename
	execute "normal! o# define " . gatename
	execute "normal! o"
	execute "normal! o"
	execute "normal! o"
	execute "normal! Go#endif"
	normal! kk
endfunction
function! s:header()
	execute ":Stdheader"
	normal! kk
endfunction
autocmd BufNewFile *.{h,hpp} call <SID>insert_gates()
autocmd BufNewFile *.{c,h} call <SID>header()
