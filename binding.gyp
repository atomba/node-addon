{
  "targets": [
    {
      "target_name": "nodetest",
      "sources": [ "swig_wrap.cxx" ],
      "cflags!": [ '-DSWIG_V8_VERSION=0x040685' ],
      "cflags_cc!": [ '-DSWIG_V8_VERSION=0x040685' ],
      "include_dirs": ["src"],
	  "libraries": []
    }
  ]
}