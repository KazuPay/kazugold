from distutils.core import setup
setup(name='KGLDspendfrom',
      version='1.0',
      description='Command-line utility for kazugold "coin control"',
      author='Gavin Andresen',
      author_email='gavin@kazugoldfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
