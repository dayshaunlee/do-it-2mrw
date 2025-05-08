import { contextBridge } from 'electron'
const path = require('path')
const addonPath = path.resolve(process.cwd(), 'native-addon/build/Release/addon.node')
// @ts-ignore
const addon = require(addonPath)
const instance = new addon.Addon()

declare global {
  interface Window {
    App: typeof API
  }
}

const API = {
  sayHelloFromBridge: () => console.log('\nHello from bridgeAPI! 👋\n\n'),
  username: process.env.USER || process.env.USERNAME || 'Unknown',
  helloworld: (name: string) => instance.helloWorld(name),

}

contextBridge.exposeInMainWorld('App', API)
