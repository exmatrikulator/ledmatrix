static uint16_t nyan[] = {
  0x0000, 0x1c00, 0x1300, 0x1980, 0x0c8e, 0x06d2, 0x7ff2, 0x8016, 0x1f8c, 0x3ec8, 0x6fee, 0x7fea, 0x7fac, 0x7be8, 0x5ee8, 0x7fe8, 0x7c28, 0x4058, 0x404c, 0x608a, 0x79ae, 0x3828, 0x182c, 0x88aa, 0x702a, 0x20ac, 0x4188, 0x4050, 0x3c60, 0x03c0, 0x0000,
  0x0000, 0x0600, 0x0880, 0x0680, 0x0240, 0x024e, 0x7ff2, 0x8012, 0x1f8c, 0x3ec8, 0x6fec, 0x7fea, 0x7fae, 0x7be8, 0x5ee8, 0x7fe8, 0x7fe8, 0x7c28, 0x4058, 0x404a, 0x608a, 0x39ae, 0x1828, 0x882c, 0x78aa, 0x102a, 0x20ae, 0x4188, 0x4050, 0x3c60, 0x03c0,
  0x0000, 0x0040, 0x00a0, 0x00a0, 0x00a0, 0x0180, 0x3fff, 0x4009, 0x8fc5, 0x9f66, 0xb7f4, 0xbff5, 0xbfd5, 0xbdf7, 0xaf74, 0xbff4, 0xbff4, 0xbe14, 0xa02c, 0xa024, 0xb045, 0x9cd5, 0x8c17, 0x4414, 0x3c56, 0x0815, 0x1055, 0x20c7, 0x2028, 0x1e30, 0x01e0,
  0x0000, 0x0020, 0x0090, 0x00a0, 0x0100, 0x0107, 0x3ff9, 0x4009, 0x8fc6, 0x9f64, 0xb7f6, 0xbff5, 0xbfd7, 0xbdf4, 0xaf74, 0xbff4, 0xbff4, 0xbe14, 0xa02c, 0xa026, 0xb045, 0x9cd7, 0x8c14, 0x4416, 0x3c55, 0x0815, 0x1057, 0x20c4, 0x2028, 0x1e30, 0x01e0,
  0x0300, 0x0480, 0x0480, 0x0687, 0x02c9, 0x0359, 0x3ffa, 0x400c, 0x8fc6, 0x9f65, 0xb7f5, 0xbff4, 0xbfd4, 0xbdf4, 0xaf74, 0xbff4, 0xbe14, 0xa02e, 0xa025, 0xb045, 0xbcd7, 0x9c16, 0x8c15, 0x4455, 0x3817, 0x1054, 0x20c4, 0x2028, 0x1e30, 0x01e0, 0x0000,
  0x0000, 0x0600, 0x0880, 0x0687, 0x0249, 0x0251, 0x3ffa, 0x400c, 0x8fc7, 0x9f65, 0xb7f5, 0xbff4, 0xbfd4, 0xbdf4, 0xaf74, 0xbff4, 0xbc34, 0x8057, 0x804d, 0xa08d, 0xb9ae, 0x982e, 0x882d, 0x48a9, 0x302f, 0x20a8, 0x4188, 0x4050, 0x3c60, 0x03c0, 0x0000,
};
static uint16_t nyan_mask[] = {
  0x0000, 0x1c00, 0x1f00, 0x1f80, 0x0f8e, 0x07de, 0x7ffe, 0xfffe, 0xfffc, 0xfff8, 0xfffe, 0xfffe, 0xfffc, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xfffc, 0xfffe, 0xfffe, 0xfff8, 0xfffc, 0xfffe, 0x7ffe, 0x3ffc, 0x7ff8, 0x7ff0, 0x3fe0, 0x03c0, 0x0000,
  0x0000, 0x0600, 0x0f80, 0x0780, 0x03c0, 0x03ce, 0x7ffe, 0xfffe, 0xfffc, 0xfff8, 0xfffc, 0xfffe, 0xfffe, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xfffe, 0xfffe, 0xfffe, 0xfff8, 0xfffc, 0x7ffe, 0x1ffe, 0x3ffe, 0x7ff8, 0x7ff0, 0x3fe0, 0x03c0,
  0x0000, 0x0040, 0x00e0, 0x00e0, 0x00e0, 0x01c0, 0x3fff, 0x7fff, 0xffff, 0xfffe, 0xfffc, 0xffff, 0xffff, 0xffff, 0xfffc, 0xfffc, 0xfffc, 0xfffc, 0xfffc, 0xfffc, 0xffff, 0xffff, 0xffff, 0x7ffc, 0x3ffe, 0x0fff, 0x1fff, 0x3fff, 0x3ff8, 0x1ff0, 0x01e0,
  0x0000, 0x0020, 0x00f0, 0x00e0, 0x0180, 0x0187, 0x3fff, 0x7fff, 0xfffe, 0xfffc, 0xfffe, 0xffff, 0xffff, 0xfffc, 0xfffc, 0xfffc, 0xfffc, 0xfffc, 0xfffc, 0xfffe, 0xffff, 0xffff, 0xfffc, 0x7ffe, 0x3fff, 0x0fff, 0x1fff, 0x3ffc, 0x3ff8, 0x1ff0, 0x01e0,
  0x0300, 0x0780, 0x0780, 0x0787, 0x03cf, 0x03df, 0x3ffe, 0x7ffc, 0xfffe, 0xffff, 0xffff, 0xfffc, 0xfffc, 0xfffc, 0xfffc, 0xfffc, 0xfffc, 0xfffe, 0xffff, 0xffff, 0xffff, 0xfffe, 0xffff, 0x7fff, 0x3fff, 0x1ffc, 0x3ffc, 0x3ff8, 0x1ff0, 0x01e0, 0x0000,
  0x0000, 0x0600, 0x0f80, 0x0787, 0x03cf, 0x03df, 0x3ffe, 0x7ffc, 0xffff, 0xffff, 0xffff, 0xfffc, 0xfffc, 0xfffc, 0xfffc, 0xfffc, 0xfffc, 0xffff, 0xffff, 0xffff, 0xfffe, 0xfffe, 0xffff, 0x7fff, 0x3fff, 0x3ff8, 0x7ff8, 0x7ff0, 0x3fe0, 0x03c0, 0x0000,
};