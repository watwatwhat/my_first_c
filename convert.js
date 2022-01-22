const startTime = new Date().toLocaleString({ timeZone: 'Asia/Tokyo' });
const duration = 210;

function convertM2H() {
    console.log("開始時間：", startTime);
    const startTimeMilli = Date.parse(startTime)
    const durationMilli = duration*60*1000
    const endDateMilli = startTimeMilli + durationMilli
    const endTime = new Date(endDateMilli).toLocaleString({ timeZone: 'Asia/Tokyo' })
    console.log("終了時間：", endTime)
}

convertM2H();