from distutils.core import setup, Extension
 
myMathModule = Extension('myMath', sources = ['c3np1.c'])
 
setup ( name = 'myMath',
        version = '0.0.1',
        description = 'Various functions for computation',
        author = 'Ilker Manap',
        author_email='ilkermanap@gmail.com',
        ext_modules = [myMathModule],
        url='https://github.com/ilkermanap/myMath'
        #download_url='https://github.com/ilkermanap/lfg/archive/python3.tar.gz'
    )
