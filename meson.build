project('deskapp', ['cpp', 'c'],
          version: '0.1.0',
    meson_version: '>= 0.59.0',
  default_options: [ 'warning_level=2', 'werror=false', 'cpp_std=gnu++2a', 'buildtype=debugoptimized' ],
)


gtk4_dep = dependency('gtk4')
gtkmm_dep = dependency('gtkmm-4.0')

subdir('src')
