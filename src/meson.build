deskapp_sources = [
  'main.cpp',
]

deskapp_deps = [  gtk4_dep, gtkmm_dep]
cpp_args = [
  '-I/usr/include/gtkmm-4.0', # caminho para o diretório de inclusão do Gtkmm
  '-I/usr/lib/x86_64-linux-gnu/glibmm-2.68/include', # caminho para o diretório de inclusão do Glibmm (dependência do Gtkmm)
  '-I/usr/include/glibmm-2.68', # caminho para o diretório de inclusão do Glibmm (dependência do Gtkmm)
]
executable('deskapp', deskapp_sources,
  dependencies: deskapp_deps,
  install: true,
)
