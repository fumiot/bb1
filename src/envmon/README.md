## Contents

```sh
envmon
├── Config.in       # kconfig file
├── aos.mk          # aos build system file(for make)
├── app.config      # aos app config file
├── main.c          # program entry main()
└── app_main.c      # application entry application_start()
```


## Introduction

FUMIOT Wifi环境监测示例，使用方法见[入门指南](../../AnIotStartGuide.md)*WiFi环境监测器*章节

### DependenciesF

### Supported Boards

- NodeMCU-32S

### Build

```
$ aos make
$ aos upload
```

