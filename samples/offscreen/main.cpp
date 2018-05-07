#include <octoon/octoon.h>
#include <octoon/game_object.h>
#include <octoon/game_app.h>
#include <octoon/video_feature.h>

#include "path_meshing_component.h"

#if 0
const char* chars =
R"({"color":[255,0,255],"boundingBox":{"min":[83.41,328.29,0.00],"max":[587.41,414.69,0.00],"center":[0.50,0.50,0.50]},"transform":{"translate":[],"scale":[],"rotation":[18.00,28.00,-6.00]},"material":{"type":2,"hollow":false,"thickness":20.00,"lights":[{"direcction":[0.00,1.00,0.00],"intensity":1.00,"ambient":1.00,"highLight":0.60,"highLightSize":0.90,"darkcolor":[0.00,0.00,0.00]}]},"text":{"chars":[{"paths":[{"points":[[135.72,365.42,8],[138.82,367.95,2],[141.63,370.76,2],[147.25,376.38,1],[145.00,378.35,2],[143.32,380.32,2],[142.19,378.63,2],[140.50,376.67,2],[134.04,376.95,2],[128.41,377.51,2],[125.32,382.57,2],[121.66,386.51,2],[121.66,399.17,1],[123.35,398.32,2],[125.18,397.34,2],[127.00,396.35,2],[128.97,395.23,2],[129.54,397.76,2],[130.66,400.01,2],[127.29,401.70,2],[123.35,403.95,2],[119.41,406.20,2],[116.88,407.88,2],[115.75,405.35,2],[114.07,403.10,2],[116.88,401.70,2],[117.16,398.60,2],[117.16,390.17,1],[113.50,393.26,2],[105.63,397.48,2],[104.50,394.95,2],[102.25,392.42,2],[107.60,391.01,2],[113.08,387.35,2],[118.57,383.70,2],[122.50,377.79,2],[116.04,378.63,1],[114.07,378.92,2],[110.69,379.76,2],[109.85,376.95,2],[108.72,374.42,2],[112.10,373.85,2],[116.04,369.77,2],[119.97,365.70,2],[124.19,358.95,2],[126.44,360.35,2],[129.82,362.04,2],[127.57,364.01,2],[124.19,367.52,2],[120.82,371.04,2],[117.16,374.13,2],[127.29,373.85,2],[136.85,373.01,2],[134.60,370.48,2],[132.35,368.51,2],[134.32,367.10,2],[135.72,365.42,2]]},{"points":[[123.35,342.07,8],[125.88,341.79,2],[128.97,340.95,2],[130.94,345.45,2],[131.79,349.38,2],[141.35,349.38,1],[145.29,349.38,2],[151.19,349.10,2],[151.19,353.60,1],[145.29,353.32,2],[141.35,353.32,2],[116.60,353.32,1],[111.54,353.32,2],[106.19,353.60,2],[106.19,349.10,1],[111.25,349.38,2],[116.32,349.38,2],[126.16,349.38,1],[125.60,346.29,2],[123.35,342.07,2]]},{"points":[[149.79,385.38,8],[147.54,386.79,2],[144.72,388.62,2],[141.91,390.45,2],[139.10,392.42,2],[140.22,394.38,2],[143.60,396.92,2],[146.97,399.45,2],[153.16,401.13,2],[150.63,403.10,2],[149.22,405.92,2],[142.75,403.10,2],[138.68,399.02,2],[134.60,394.95,2],[132.07,390.17,2],[129.54,385.38,2],[127.85,380.88,2],[131.79,379.48,1],[134.32,386.23,2],[136.57,389.04,2],[139.38,387.35,2],[141.63,385.38,2],[143.88,383.42,2],[145.57,381.45,2],[147.25,383.70,2],[149.79,385.38,2]]},{"points":[[102.54,383.13,8],[101.13,384.82,2],[97.33,393.68,2],[93.54,402.54,2],[91.85,406.20,2],[89.60,404.23,2],[86.50,402.54,2],[89.32,399.17,2],[92.55,392.70,2],[95.79,386.23,2],[97.75,380.32,2],[100.00,382.01,2],[102.54,383.13,2]]},{"points":[[148.38,368.51,8],[145.85,365.98,2],[142.47,363.31,2],[139.10,360.63,2],[133.47,357.54,2],[135.16,356.13,2],[137.13,353.88,2],[145.00,359.23,1],[148.94,361.76,2],[152.32,364.29,2],[149.79,366.26,2],[148.38,368.51,2]]},{"points":[[103.66,365.42,8],[107.32,363.73,2],[110.97,360.63,2],[114.63,357.54,2],[116.60,354.17,2],[118.85,356.13,2],[121.38,358.10,2],[119.13,359.51,2],[115.61,362.74,2],[112.10,365.98,2],[108.16,369.07,2],[106.19,367.10,2],[103.66,365.42,2]]},{"points":[[89.88,361.48,8],[91.85,362.60,2],[94.94,364.85,2],[98.04,367.10,2],[101.69,369.63,2],[99.16,372.17,2],[97.75,374.70,2],[95.79,372.45,2],[92.83,370.06,2],[89.88,367.67,2],[86.50,365.42,2],[88.19,363.73,2],[89.88,361.48,2]]},{"points":[[100.00,356.98,8],[96.63,353.60,2],[93.96,351.49,2],[91.29,349.38,2],[89.60,347.70,2],[91.57,345.73,2],[92.69,344.04,2],[94.38,345.17,2],[97.19,347.42,2],[100.00,349.67,2],[103.94,352.48,2],[101.97,354.45,2],[100.00,356.98,2]]}]},{"paths":[{"points":[[207.72,365.42,8],[210.82,367.95,2],[213.63,370.76,2],[219.25,376.38,1],[217.00,378.35,2],[215.32,380.32,2],[214.19,378.63,2],[212.50,376.67,2],[206.04,376.95,2],[200.41,377.51,2],[197.32,382.57,2],[193.66,386.51,2],[193.66,399.17,1],[195.35,398.32,2],[197.18,397.34,2],[199.00,396.35,2],[200.97,395.23,2],[201.54,397.76,2],[202.66,400.01,2],[199.29,401.70,2],[195.35,403.95,2],[191.41,406.20,2],[188.88,407.88,2],[187.75,405.35,2],[186.07,403.10,2],[188.88,401.70,2],[189.16,398.60,2],[189.16,390.17,1],[185.50,393.26,2],[177.63,397.48,2],[176.50,394.95,2],[174.25,392.42,2],[179.60,391.01,2],[185.08,387.35,2],[190.57,383.70,2],[194.50,377.79,2],[188.04,378.63,1],[186.07,378.92,2],[182.69,379.76,2],[181.85,376.95,2],[180.72,374.42,2],[184.10,373.85,2],[188.04,369.77,2],[191.97,365.70,2],[196.19,358.95,2],[198.44,360.35,2],[201.82,362.04,2],[199.57,364.01,2],[196.19,367.52,2],[192.82,371.04,2],[189.16,374.13,2],[199.29,373.85,2],[208.85,373.01,2],[206.60,370.48,2],[204.35,368.51,2],[206.32,367.10,2],[207.72,365.42,2]]},{"points":[[195.35,342.07,8],[197.88,341.79,2],[200.97,340.95,2],[202.94,345.45,2],[203.79,349.38,2],[213.35,349.38,1],[217.29,349.38,2],[223.19,349.10,2],[223.19,353.60,1],[217.29,353.32,2],[213.35,353.32,2],[188.60,353.32,1],[183.54,353.32,2],[178.19,353.60,2],[178.19,349.10,1],[183.25,349.38,2],[188.32,349.38,2],[198.16,349.38,1],[197.60,346.29,2],[195.35,342.07,2]]},{"points":[[221.79,385.38,8],[219.54,386.79,2],[216.72,388.62,2],[213.91,390.45,2],[211.10,392.42,2],[212.22,394.38,2],[215.60,396.92,2],[218.97,399.45,2],[225.16,401.13,2],[222.63,403.10,2],[221.22,405.92,2],[214.75,403.10,2],[210.68,399.02,2],[206.60,394.95,2],[204.07,390.17,2],[201.54,385.38,2],[199.85,380.88,2],[203.79,379.48,1],[206.32,386.23,2],[208.57,389.04,2],[211.38,387.35,2],[213.63,385.38,2],[215.88,383.42,2],[217.57,381.45,2],[219.25,383.70,2],[221.79,385.38,2]]},{"points":[[174.54,383.13,8],[173.13,384.82,2],[169.33,393.68,2],[165.54,402.54,2],[163.85,406.20,2],[161.60,404.23,2],[158.50,402.54,2],[161.32,399.17,2],[164.55,392.70,2],[167.79,386.23,2],[169.75,380.32,2],[172.00,382.01,2],[174.54,383.13,2]]},{"points":[[220.38,368.51,8],[217.85,365.98,2],[214.47,363.31,2],[211.10,360.63,2],[205.47,357.54,2],[207.16,356.13,2],[209.13,353.88,2],[217.00,359.23,1],[220.94,361.76,2],[224.32,364.29,2],[221.79,366.26,2],[220.38,368.51,2]]},{"points":[[175.66,365.42,8],[179.32,363.73,2],[182.97,360.63,2],[186.63,357.54,2],[188.60,354.17,2],[190.85,356.13,2],[193.38,358.10,2],[191.13,359.51,2],[187.61,362.74,2],[184.10,365.98,2],[180.16,369.07,2],[178.19,367.10,2],[175.66,365.42,2]]},{"points":[[161.88,361.48,8],[163.85,362.60,2],[166.94,364.85,2],[170.04,367.10,2],[173.69,369.63,2],[171.16,372.17,2],[169.75,374.70,2],[167.79,372.45,2],[164.83,370.06,2],[161.88,367.67,2],[158.50,365.42,2],[160.19,363.73,2],[161.88,361.48,2]]},{"points":[[172.00,356.98,8],[168.63,353.60,2],[165.96,351.49,2],[163.29,349.38,2],[161.60,347.70,2],[163.57,345.73,2],[164.69,344.04,2],[166.38,345.17,2],[169.19,347.42,2],[172.00,349.67,2],[175.94,352.48,2],[173.97,354.45,2],[172.00,356.98,2]]}]},{"paths":[{"points":[[247.10,368.79,8],[247.10,350.23,1],[247.10,347.70,2],[246.82,342.92,2],[253.00,342.92,1],[252.72,348.26,2],[252.72,349.95,2],[252.72,368.79,1],[286.75,368.79,1],[290.41,368.79,2],[294.63,368.51,2],[294.63,374.13,1],[289.29,373.85,2],[284.79,373.85,2],[268.47,373.85,1],[270.44,379.48,2],[274.52,384.82,2],[278.60,390.17,2],[284.22,393.68,2],[289.85,397.20,2],[294.35,398.60,2],[290.69,400.85,2],[288.72,404.23,2],[282.82,401.13,2],[277.75,396.92,2],[272.69,392.70,2],[268.75,386.65,2],[264.82,380.60,2],[262.85,373.85,2],[252.72,373.85,1],[252.72,396.07,1],[260.88,391.01,2],[263.69,388.48,2],[265.66,391.57,2],[267.63,394.10,2],[262.29,396.63,2],[256.94,400.43,2],[251.60,404.23,2],[249.07,406.76,2],[246.82,403.67,2],[244.85,401.42,2],[247.10,399.17,2],[247.10,395.51,2],[247.10,373.85,1],[240.63,373.85,1],[236.69,373.85,2],[231.63,374.13,2],[231.63,368.51,1],[236.69,368.79,2],[240.07,368.79,2],[247.10,368.79,1]]},{"points":[[282.54,347.42,8],[279.44,349.95,2],[273.39,355.99,2],[267.35,362.04,2],[261.44,367.67,2],[258.91,364.29,2],[257.22,363.17,2],[262.00,359.79,2],[267.91,353.60,2],[273.82,347.42,2],[276.91,342.92,2],[279.16,344.88,2],[282.54,347.42,2]]}]},{"paths":[{"points":[[351.16,348.82,8],[357.35,348.82,2],[363.82,348.26,2],[363.82,354.45,1],[357.35,354.17,2],[351.72,354.17,2],[346.94,354.17,1],[346.94,397.48,1],[353.41,397.48,1],[359.88,397.48,2],[367.47,397.20,2],[367.47,403.10,1],[359.88,402.82,2],[353.41,402.82,2],[335.69,402.82,1],[329.22,402.82,2],[321.07,403.10,2],[321.07,397.20,1],[329.22,397.48,2],[335.69,397.48,2],[341.04,397.48,1],[341.04,354.17,1],[337.94,354.17,1],[331.75,354.17,2],[325.00,354.45,2],[325.00,348.54,1],[332.04,348.82,2],[337.94,348.82,2],[351.16,348.82,1]]},{"points":[[322.75,382.57,8],[319.94,385.38,2],[316.57,393.54,2],[313.19,401.70,2],[311.22,407.32,2],[307.85,405.35,2],[303.35,403.67,2],[306.44,400.57,2],[310.52,392.27,2],[314.60,383.98,2],[316.00,379.20,2],[319.38,381.45,2],[322.75,382.57,2]]},{"points":[[304.75,362.32,8],[311.79,365.13,2],[317.97,368.79,2],[315.72,371.04,2],[314.60,374.70,2],[308.69,370.48,2],[301.94,367.67,2],[303.63,364.85,2],[304.75,362.32,2]]},{"points":[[310.38,343.76,8],[316.85,347.42,2],[322.47,351.35,2],[320.22,353.88,2],[318.54,356.70,2],[312.63,351.63,2],[307.29,348.54,2],[308.69,346.85,2],[310.38,343.76,2]]}]},{"paths":[{"points":[[396.72,354.17,8],[401.22,346.01,2],[402.63,341.23,2],[409.10,344.04,1],[406.85,346.85,2],[402.91,354.17,2],[422.60,354.17,1],[428.79,354.17,2],[434.69,353.88,2],[434.69,359.23,1],[430.75,358.95,2],[426.54,358.95,2],[400.94,358.95,1],[397.00,365.13,2],[390.25,374.42,2],[406.85,374.42,1],[406.85,368.79,2],[406.57,363.73,2],[413.04,363.73,1],[412.75,366.82,2],[412.75,374.42,2],[423.72,374.42,1],[428.50,374.42,2],[433.85,374.13,2],[433.85,379.20,1],[429.35,378.92,2],[424.00,378.92,2],[412.75,378.92,1],[412.75,399.45,1],[412.75,403.95,2],[409.38,405.21,2],[406.00,406.48,2],[400.66,407.32,2],[399.82,403.67,2],[397.57,400.85,2],[403.75,400.85,2],[405.30,400.29,2],[406.85,399.73,2],[406.85,396.35,2],[406.85,378.92,1],[394.47,378.92,1],[387.72,378.92,2],[383.22,379.76,2],[382.38,376.95,2],[380.97,374.13,2],[384.07,373.01,2],[387.16,369.21,2],[390.25,365.42,2],[394.19,358.95,2],[386.32,358.95,1],[381.54,358.95,2],[379.00,359.23,2],[379.00,353.88,1],[381.25,354.17,2],[385.47,354.17,2],[396.72,354.17,1]]},{"points":[[390.82,395.51,8],[386.04,400.29,2],[381.54,405.07,2],[379.85,402.82,2],[377.04,400.85,2],[388.00,391.29,2],[392.22,383.98,2],[394.19,386.23,2],[397.85,388.48,2],[390.82,395.51,1]]},{"points":[[423.44,384.54,8],[426.25,387.07,2],[430.75,391.29,2],[435.25,395.51,2],[438.63,399.17,2],[437.50,400.01,2],[433.57,403.67,2],[429.35,398.32,2],[419.22,388.76,2],[422.32,386.23,2],[423.44,384.54,2]]}]},{"paths":[{"points":[[510.63,347.70,8],[506.69,347.98,2],[501.91,348.54,2],[497.13,349.10,2],[491.79,349.38,2],[491.79,360.35,1],[503.60,360.35,1],[506.41,360.35,2],[511.47,359.79,2],[511.47,365.13,1],[507.25,364.85,2],[503.88,364.85,2],[503.88,388.20,1],[503.88,391.85,2],[504.16,396.07,2],[498.54,396.07,1],[498.82,391.85,2],[498.82,388.20,2],[498.82,364.85,1],[491.79,364.85,1],[491.50,374.42,2],[490.24,381.17,2],[488.97,387.92,2],[484.47,396.35,2],[482.50,394.38,2],[479.13,393.26,2],[483.63,386.51,2],[485.04,379.76,2],[486.44,373.01,2],[486.72,364.71,2],[487.00,356.42,2],[486.44,344.32,2],[491.22,344.60,2],[497.55,343.90,2],[503.88,343.20,2],[507.25,341.79,2],[510.63,347.70,1]]},{"points":[[460.00,364.85,8],[459.72,370.48,2],[459.72,375.26,2],[459.72,392.98,1],[469.00,400.57,2],[485.46,400.43,2],[501.91,400.29,2],[512.88,399.17,2],[510.91,402.54,2],[510.63,405.63,2],[498.54,405.92,2],[490.94,405.92,2],[483.35,405.92,2],[478.00,405.49,2],[472.66,405.07,2],[468.86,403.67,2],[465.07,402.26,2],[461.83,400.01,2],[458.60,397.76,2],[455.79,400.29,2],[452.97,402.82,2],[450.44,406.76,2],[448.47,404.51,2],[445.66,402.82,2],[448.47,400.01,2],[454.66,394.10,2],[454.66,369.63,1],[451.00,369.63,2],[447.07,369.92,2],[447.07,364.57,1],[451.00,364.85,2],[454.10,364.85,2],[460.00,364.85,1]]},{"points":[[472.38,354.73,8],[472.38,346.01,2],[472.10,341.51,2],[478.00,341.51,1],[477.44,344.88,2],[477.44,354.73,2],[479.97,354.73,2],[483.63,354.45,2],[483.63,359.51,1],[479.97,359.23,2],[477.44,359.23,2],[477.44,368.51,1],[479.69,367.10,2],[482.79,365.42,2],[482.79,368.51,2],[483.35,370.76,2],[480.54,371.88,2],[477.44,373.57,2],[477.44,387.07,1],[477.44,390.45,2],[475.75,391.71,2],[474.07,392.98,2],[468.44,394.10,2],[468.16,391.57,2],[465.63,387.63,2],[471.82,388.20,2],[472.38,386.23,2],[472.38,375.82,1],[469.29,376.95,2],[465.91,379.20,2],[465.07,376.67,2],[463.38,373.29,2],[467.04,372.45,2],[472.38,370.20,2],[472.38,359.23,1],[467.32,359.23,2],[463.66,359.51,2],[463.66,354.45,1],[467.32,354.73,2],[472.38,354.73,2]]},{"points":[[456.07,344.32,8],[458.88,351.63,2],[460.57,356.98,2],[457.47,357.82,2],[454.66,358.95,2],[452.97,352.20,2],[450.72,346.29,2],[453.54,345.45,2],[456.07,344.32,2]]}]},{"paths":[{"points":[[554.22,342.07,8],[554.22,346.29,2],[554.08,349.67,2],[553.94,353.04,2],[554.64,357.96,2],[555.35,362.88,2],[559.85,369.63,2],[571.38,360.07,2],[573.63,354.73,2],[576.72,357.54,2],[579.25,360.07,2],[575.60,362.60,2],[572.08,365.70,2],[568.57,368.79,2],[562.38,374.13,2],[564.63,378.92,2],[570.54,384.82,2],[576.44,390.73,2],[584.88,393.26,2],[580.10,395.51,2],[579.25,398.88,2],[568.57,392.42,2],[562.80,384.54,2],[557.04,376.67,2],[553.94,368.79,2],[553.94,400.01,1],[554.22,403.95,2],[550.99,405.63,2],[547.75,407.32,2],[542.41,407.88,2],[542.13,404.79,2],[539.88,401.13,2],[544.38,401.98,2],[546.35,401.42,2],[548.32,400.85,2],[548.32,397.76,2],[548.32,353.32,1],[548.32,346.29,2],[547.75,342.07,2],[554.22,342.07,1]]},{"points":[[544.10,360.07,8],[542.69,367.67,2],[540.58,373.71,2],[538.47,379.76,2],[534.96,385.67,2],[531.44,391.57,2],[523.85,399.17,2],[521.88,396.63,2],[517.94,395.23,2],[525.82,389.60,2],[530.46,382.29,2],[535.10,374.98,2],[537.35,365.13,2],[529.75,365.13,1],[525.54,365.13,2],[520.19,365.70,2],[520.19,359.79,1],[525.25,360.07,2],[529.47,360.07,2],[544.10,360.07,1]]}]}]}})";
#else
const char* chars =
R"({
	"color":[1,0,0],
	"transform":
	{
		"translate":[318.99, 157.10],
		"scale":[1.0, 1.0, 1.0],
		"rotation":[0.0,0.0,0.0]
	},
	"material":
	{
		"type":0,
		"hollow":false,
		"wireframe":false,
		"thickness":10.0,
		"lineWidth":3.0,
		"lights":[
			{
				"direcction":[0,1,0],
				"intensity":1.0,
				"ambient":0.0,
				"highLight":0.6,
				"highLightSize":0.9,
				"darkcolor":[0,1,0]
			}
		]
	},
	"boundingBox":
	{
		"min":[0.0,0.0,0.0],
		"max":[420.00,72.00,0.0],
		"center":[0.50, 0.50]
	},
	"text":
	{
		"chars":[
			{
				"paths":
				[
					{ "points":[[43.59,30.94,8],[46.17,33.05,2],[48.52,35.39,2],[53.20,40.08,1],[51.33,41.72,2],[49.92,43.36,2],[48.98,41.95,2],[47.58,40.31,2],[42.19,40.55,2],[37.50,41.02,2],[34.92,45.23,2],[31.88,48.52,2],[31.88,59.06,1],[33.28,58.36,2],[34.80,57.55,2],[36.33,56.72,2],[37.97,55.78,2],[38.44,57.89,2],[39.38,59.77,2],[36.56,61.17,2],[33.28,63.05,2],[30.00,64.92,2],[27.89,66.33,2],[26.95,64.22,2],[25.55,62.34,2],[27.89,61.17,2],[28.13,58.59,2],[28.13,51.56,1],[25.08,54.14,2],[18.52,57.66,2],[17.58,55.55,2],[15.70,53.44,2],[20.16,52.27,2],[24.72,49.22,2],[29.30,46.17,2],[32.58,41.25,2],[27.19,41.95,1],[25.55,42.19,2],[22.73,42.89,2],[22.03,40.55,2],[21.09,38.44,2],[23.91,37.97,2],[27.19,34.58,2],[30.47,31.17,2],[33.98,25.55,2],[35.86,26.72,2],[38.67,28.13,2],[36.80,29.77,2],[33.98,32.70,2],[31.17,35.63,2],[28.13,38.20,2],[36.56,37.97,2],[44.53,37.27,2],[42.66,35.16,2],[40.78,33.52,2],[42.42,32.34,2],[43.59,30.94,2]]},
					{ "points":[[33.28,11.48,8],[35.39,11.25,2],[37.97,10.55,2],[39.61,14.30,2],[40.31,17.58,2],[48.28,17.58,1],[51.56,17.58,2],[56.48,17.34,2],[56.48,21.09,1],[51.56,20.86,2],[48.28,20.86,2],[27.66,20.86,1],[23.44,20.86,2],[18.98,21.09,2],[18.98,17.34,1],[23.20,17.58,2],[27.42,17.58,2],[35.63,17.58,1],[35.16,15.00,2],[33.28,11.48,2]]},
					{ "points":[[55.31,47.58,8],[53.44,48.75,2],[51.09,50.28,2],[48.75,51.80,2],[46.41,53.44,2],[47.34,55.08,2],[50.16,57.19,2],[52.97,59.30,2],[58.13,60.70,2],[56.02,62.34,2],[54.84,64.69,2],[49.45,62.34,2],[46.05,58.95,2],[42.66,55.55,2],[40.55,51.56,2],[38.44,47.58,2],[37.03,43.83,2],[40.31,42.66,1],[42.42,48.28,2],[44.30,50.63,2],[46.64,49.22,2],[48.52,47.58,2],[50.39,45.94,2],[51.80,44.30,2],[53.20,46.17,2],[55.31,47.58,2]]},
					{ "points":[[15.94,45.70,8],[14.77,47.11,2],[11.59,54.50,2],[8.44,61.88,2],[7.03,64.92,2],[5.16,63.28,2],[2.58,61.88,2],[4.92,59.06,2],[7.61,53.67,2],[10.31,48.28,2],[11.95,43.36,2],[13.83,44.77,2],[15.94,45.70,2]]},
					{ "points":[[54.14,33.52,8],[52.03,31.41,2],[49.22,29.19,2],[46.41,26.95,2],[41.72,24.38,2],[43.13,23.20,2],[44.77,21.33,2],[51.33,25.78,1],[54.61,27.89,2],[57.42,30.00,2],[55.31,31.64,2],[54.14,33.52,2]]},
					{ "points":[[16.88,30.94,8],[19.92,29.53,2],[22.97,26.95,2],[26.02,24.38,2],[27.66,21.56,2],[29.53,23.20,2],[31.64,24.84,2],[29.77,26.02,2],[26.83,28.72,2],[23.91,31.41,2],[20.63,33.98,2],[18.98,32.34,2],[16.88,30.94,2]]},
					{ "points":[[5.39,27.66,8],[7.03,28.59,2],[9.61,30.47,2],[12.19,32.34,2],[15.23,34.45,2],[13.13,36.56,2],[11.95,38.67,2],[10.31,36.80,2],[7.84,34.81,2],[5.39,32.81,2],[2.58,30.94,2],[3.98,29.53,2],[5.39,27.66,2]]},
					{ "points":[[13.83,23.91,8],[11.02,21.09,2],[8.78,19.34,2],[6.56,17.58,2],[5.16,16.17,2],[6.80,14.53,2],[7.73,13.13,2],[9.14,14.06,2],[11.48,15.94,2],[13.83,17.81,2],[17.11,20.16,2],[15.47,21.80,2],[13.83,23.91,2]]}
				]
			},
			{
				"paths":
				[
					{ "points":[[103.59,30.94,8],[106.17,33.05,2],[108.52,35.39,2],[113.20,40.08,1],[111.33,41.72,2],[109.92,43.36,2],[108.98,41.95,2],[107.58,40.31,2],[102.19,40.55,2],[97.50,41.02,2],[94.92,45.23,2],[91.88,48.52,2],[91.88,59.06,1],[93.28,58.36,2],[94.80,57.55,2],[96.33,56.72,2],[97.97,55.78,2],[98.44,57.89,2],[99.38,59.77,2],[96.56,61.17,2],[93.28,63.05,2],[90.00,64.92,2],[87.89,66.33,2],[86.95,64.22,2],[85.55,62.34,2],[87.89,61.17,2],[88.13,58.59,2],[88.13,51.56,1],[85.08,54.14,2],[78.52,57.66,2],[77.58,55.55,2],[75.70,53.44,2],[80.16,52.27,2],[84.72,49.22,2],[89.30,46.17,2],[92.58,41.25,2],[87.19,41.95,1],[85.55,42.19,2],[82.73,42.89,2],[82.03,40.55,2],[81.09,38.44,2],[83.91,37.97,2],[87.19,34.58,2],[90.47,31.17,2],[93.98,25.55,2],[95.86,26.72,2],[98.67,28.13,2],[96.80,29.77,2],[93.98,32.70,2],[91.17,35.63,2],[88.13,38.20,2],[96.56,37.97,2],[104.53,37.27,2],[102.66,35.16,2],[100.78,33.52,2],[102.42,32.34,2],[103.59,30.94,2]]},
					{ "points":[[93.28,11.48,8],[95.39,11.25,2],[97.97,10.55,2],[99.61,14.30,2],[100.31,17.58,2],[108.28,17.58,1],[111.56,17.58,2],[116.48,17.34,2],[116.48,21.09,1],[111.56,20.86,2],[108.28,20.86,2],[87.66,20.86,1],[83.44,20.86,2],[78.98,21.09,2],[78.98,17.34,1],[83.20,17.58,2],[87.42,17.58,2],[95.63,17.58,1],[95.16,15.00,2],[93.28,11.48,2]]},
					{ "points":[[115.31,47.58,8],[113.44,48.75,2],[111.09,50.28,2],[108.75,51.80,2],[106.41,53.44,2],[107.34,55.08,2],[110.16,57.19,2],[112.97,59.30,2],[118.13,60.70,2],[116.02,62.34,2],[114.84,64.69,2],[109.45,62.34,2],[106.05,58.95,2],[102.66,55.55,2],[100.55,51.56,2],[98.44,47.58,2],[97.03,43.83,2],[100.31,42.66,1],[102.42,48.28,2],[104.30,50.63,2],[106.64,49.22,2],[108.52,47.58,2],[110.39,45.94,2],[111.80,44.30,2],[113.20,46.17,2],[115.31,47.58,2]]},
					{ "points":[[75.94,45.70,8],[74.77,47.11,2],[71.59,54.50,2],[68.44,61.88,2],[67.03,64.92,2],[65.16,63.28,2],[62.58,61.88,2],[64.92,59.06,2],[67.61,53.67,2],[70.31,48.28,2],[71.95,43.36,2],[73.83,44.77,2],[75.94,45.70,2]]},
					{ "points":[[114.14,33.52,8],[112.03,31.41,2],[109.22,29.19,2],[106.41,26.95,2],[101.72,24.38,2],[103.13,23.20,2],[104.77,21.33,2],[111.33,25.78,1],[114.61,27.89,2],[117.42,30.00,2],[115.31,31.64,2],[114.14,33.52,2]]},
					{ "points":[[76.88,30.94,8],[79.92,29.53,2],[82.97,26.95,2],[86.02,24.38,2],[87.66,21.56,2],[89.53,23.20,2],[91.64,24.84,2],[89.77,26.02,2],[86.83,28.72,2],[83.91,31.41,2],[80.63,33.98,2],[78.98,32.34,2],[76.88,30.94,2]]},
					{ "points":[[65.39,27.66,8],[67.03,28.59,2],[69.61,30.47,2],[72.19,32.34,2],[75.23,34.45,2],[73.13,36.56,2],[71.95,38.67,2],[70.31,36.80,2],[67.84,34.81,2],[65.39,32.81,2],[62.58,30.94,2],[63.98,29.53,2],[65.39,27.66,2]]},
					{ "points":[[73.83,23.91,8],[71.02,21.09,2],[68.78,19.34,2],[66.56,17.58,2],[65.16,16.17,2],[66.80,14.53,2],[67.73,13.13,2],[69.14,14.06,2],[71.48,15.94,2],[73.83,17.81,2],[77.11,20.16,2],[75.47,21.80,2],[73.83,23.91,2]]}
				]
			},
			{
				"paths":
				[
					{ "points":[[136.41,33.75,8],[136.41,18.28,1],[136.41,16.17,2],[136.17,12.19,2],[141.33,12.19,1],[141.09,16.64,2],[141.09,18.05,2],[141.09,33.75,1],[169.45,33.75,1],[172.50,33.75,2],[176.02,33.52,2],[176.02,38.20,1],[171.56,37.97,2],[167.81,37.97,2],[154.22,37.97,1],[155.86,42.66,2],[159.25,47.11,2],[162.66,51.56,2],[167.34,54.50,2],[172.03,57.42,2],[175.78,58.59,2],[172.73,60.47,2],[171.09,63.28,2],[166.17,60.70,2],[161.95,57.19,2],[157.73,53.67,2],[154.45,48.64,2],[151.17,43.59,2],[149.53,37.97,2],[141.09,37.97,1],[141.09,56.48,1],[147.89,52.27,2],[150.23,50.16,2],[151.88,52.73,2],[153.52,54.84,2],[149.06,56.95,2],[144.61,60.11,2],[140.16,63.28,2],[138.05,65.39,2],[136.17,62.81,2],[134.53,60.94,2],[136.41,59.06,2],[136.41,56.02,2],[136.41,37.97,1],[131.02,37.97,1],[127.73,37.97,2],[123.52,38.20,2],[123.52,33.52,1],[127.73,33.75,2],[130.55,33.75,2],[136.41,33.75,1]]},
					{ "points":[[165.94,15.94,8],[163.36,18.05,2],[158.31,23.09,2],[153.28,28.13,2],[148.36,32.81,2],[146.25,30.00,2],[144.84,29.06,2],[148.83,26.25,2],[153.75,21.09,2],[158.67,15.94,2],[161.25,12.19,2],[163.13,13.83,2],[165.94,15.94,2]]}
				]
			},
			{
				"paths":
				[
					{ "points":[[223.13,17.11,8],[228.28,17.11,2],[233.67,16.64,2],[233.67,21.80,1],[228.28,21.56,2],[223.59,21.56,2],[219.61,21.56,1],[219.61,57.66,1],[225.00,57.66,1],[230.39,57.66,2],[236.72,57.42,2],[236.72,62.34,1],[230.39,62.11,2],[225.00,62.11,2],[210.23,62.11,1],[204.84,62.11,2],[198.05,62.34,2],[198.05,57.42,1],[204.84,57.66,2],[210.23,57.66,2],[214.69,57.66,1],[214.69,21.56,1],[212.11,21.56,1],[206.95,21.56,2],[201.33,21.80,2],[201.33,16.88,1],[207.19,17.11,2],[212.11,17.11,2],[223.13,17.11,1]]},
					{ "points":[[199.45,45.23,8],[197.11,47.58,2],[194.30,54.38,2],[191.48,61.17,2],[189.84,65.86,2],[187.03,64.22,2],[183.28,62.81,2],[185.86,60.23,2],[189.25,53.33,2],[192.66,46.41,2],[193.83,42.42,2],[196.64,44.30,2],[199.45,45.23,2]]},
					{ "points":[[184.45,28.36,8],[190.31,30.70,2],[195.47,33.75,2],[193.59,35.63,2],[192.66,38.67,2],[187.73,35.16,2],[182.11,32.81,2],[183.52,30.47,2],[184.45,28.36,2]]},
					{ "points":[[189.14,12.89,8],[194.53,15.94,2],[199.22,19.22,2],[197.34,21.33,2],[195.94,23.67,2],[191.02,19.45,2],[186.56,16.88,2],[187.73,15.47,2],[189.14,12.89,2]]}
				]
			},
			{
				"paths":
				[
					{ "points":[[261.09,21.56,8],[264.84,14.77,2],[266.02,10.78,2],[271.41,13.13,1],[269.53,15.47,2],[266.25,21.56,2],[282.66,21.56,1],[287.81,21.56,2],[292.73,21.33,2],[292.73,25.78,1],[289.45,25.55,2],[285.94,25.55,2],[264.61,25.55,1],[261.33,30.70,2],[255.70,38.44,2],[269.53,38.44,1],[269.53,33.75,2],[269.30,29.53,2],[274.69,29.53,1],[274.45,32.11,2],[274.45,38.44,2],[283.59,38.44,1],[287.58,38.44,2],[292.03,38.20,2],[292.03,42.42,1],[288.28,42.19,2],[283.83,42.19,2],[274.45,42.19,1],[274.45,59.30,1],[274.45,63.05,2],[271.64,64.09,2],[268.83,65.16,2],[264.38,65.86,2],[263.67,62.81,2],[261.80,60.47,2],[266.95,60.47,2],[268.23,60.00,2],[269.53,59.53,2],[269.53,56.72,2],[269.53,42.19,1],[259.22,42.19,1],[253.59,42.19,2],[249.84,42.89,2],[249.14,40.55,2],[247.97,38.20,2],[250.55,37.27,2],[253.13,34.11,2],[255.70,30.94,2],[258.98,25.55,2],[252.42,25.55,1],[248.44,25.55,2],[246.33,25.78,2],[246.33,21.33,1],[248.20,21.56,2],[251.72,21.56,2],[261.09,21.56,1]]},
					{ "points":[[256.17,56.02,8],[252.19,60.00,2],[248.44,63.98,2],[247.03,62.11,2],[244.69,60.47,2],[253.83,52.50,2],[257.34,46.41,2],[258.98,48.28,2],[262.03,50.16,2],[256.17,56.02,1]]},
					{ "points":[[283.36,46.88,8],[285.70,48.98,2],[289.45,52.50,2],[293.20,56.02,2],[296.02,59.06,2],[295.08,59.77,2],[291.80,62.81,2],[288.28,58.36,2],[279.84,50.39,2],[282.42,48.28,2],[283.36,46.88,2]]}
				]
			},
			{
				"paths":
				[
					{ "points":[[356.02,16.17,8],[352.73,16.41,2],[348.75,16.88,2],[344.77,17.34,2],[340.31,17.58,2],[340.31,26.72,1],[350.16,26.72,1],[352.50,26.72,2],[356.72,26.25,2],[356.72,30.70,1],[353.20,30.47,2],[350.39,30.47,2],[350.39,49.92,1],[350.39,52.97,2],[350.63,56.48,2],[345.94,56.48,1],[346.17,52.97,2],[346.17,49.92,2],[346.17,30.47,1],[340.31,30.47,1],[340.08,38.44,2],[339.02,44.06,2],[337.97,49.69,2],[334.22,56.72,2],[332.58,55.08,2],[329.77,54.14,2],[333.52,48.52,2],[334.69,42.89,2],[335.86,37.27,2],[336.09,30.36,2],[336.33,23.44,2],[335.86,13.36,2],[339.84,13.59,2],[345.11,13.02,2],[350.39,12.42,2],[353.20,11.25,2],[356.02,16.17,1]]},
					{ "points":[[313.83,30.47,8],[313.59,35.16,2],[313.59,39.14,2],[313.59,53.91,1],[321.33,60.23,2],[335.03,60.11,2],[348.75,60.00,2],[357.89,59.06,2],[356.25,61.88,2],[356.02,64.45,2],[345.94,64.69,2],[339.61,64.69,2],[333.28,64.69,2],[328.83,64.33,2],[324.38,63.98,2],[321.20,62.81,2],[318.05,61.64,2],[315.34,59.77,2],[312.66,57.89,2],[310.31,60.00,2],[307.97,62.11,2],[305.86,65.39,2],[304.22,63.52,2],[301.88,62.11,2],[304.22,59.77,2],[309.38,54.84,2],[309.38,34.45,1],[306.33,34.45,2],[303.05,34.69,2],[303.05,30.23,1],[306.33,30.47,2],[308.91,30.47,2],[313.83,30.47,1]]},
					{ "points":[[324.14,22.03,8],[324.14,14.77,2],[323.91,11.02,2],[328.83,11.02,1],[328.36,13.83,2],[328.36,22.03,2],[330.47,22.03,2],[333.52,21.80,2],[333.52,26.02,1],[330.47,25.78,2],[328.36,25.78,2],[328.36,33.52,1],[330.23,32.34,2],[332.81,30.94,2],[332.81,33.52,2],[333.28,35.39,2],[330.94,36.33,2],[328.36,37.73,2],[328.36,48.98,1],[328.36,51.80,2],[326.95,52.86,2],[325.55,53.91,2],[320.86,54.84,2],[320.63,52.73,2],[318.52,49.45,2],[323.67,49.92,2],[324.14,48.28,2],[324.14,39.61,1],[321.56,40.55,2],[318.75,42.42,2],[318.05,40.31,2],[316.64,37.50,2],[319.69,36.80,2],[324.14,34.92,2],[324.14,25.78,1],[319.92,25.78,2],[316.88,26.02,2],[316.88,21.80,1],[319.92,22.03,2],[324.14,22.03,2]]},
					{ "points":[[310.55,13.36,8],[312.89,19.45,2],[314.30,23.91,2],[311.72,24.61,2],[309.38,25.55,2],[307.97,19.92,2],[306.09,15.00,2],[308.44,14.30,2],[310.55,13.36,2]]}
				]
			},
			{
				"paths":
				[
					{ "points":[[392.34,11.48,8],[392.34,15.00,2],[392.22,17.81,2],[392.11,20.63,2],[392.69,24.73,2],[393.28,28.83,2],[397.03,34.45,2],[406.64,26.48,2],[408.52,22.03,2],[411.09,24.38,2],[413.20,26.48,2],[410.16,28.59,2],[407.22,31.17,2],[404.30,33.75,2],[399.14,38.20,2],[401.02,42.19,2],[405.94,47.11,2],[410.86,52.03,2],[417.89,54.14,2],[413.91,56.02,2],[413.20,58.83,2],[404.30,53.44,2],[399.48,46.88,2],[394.69,40.31,2],[392.11,33.75,2],[392.11,59.77,1],[392.34,63.05,2],[389.64,64.45,2],[386.95,65.86,2],[382.50,66.33,2],[382.27,63.75,2],[380.39,60.70,2],[384.14,61.41,2],[385.78,60.94,2],[387.42,60.47,2],[387.42,57.89,2],[387.42,20.86,1],[387.42,15.00,2],[386.95,11.48,2],[392.34,11.48,1]]},
					{ "points":[[383.91,26.48,8],[382.73,32.81,2],[380.97,37.86,2],[379.22,42.89,2],[376.28,47.81,2],[373.36,52.73,2],[367.03,59.06,2],[365.39,56.95,2],[362.11,55.78,2],[368.67,51.09,2],[372.53,45.00,2],[376.41,38.91,2],[378.28,30.70,2],[371.95,30.70,1],[368.44,30.70,2],[363.98,31.17,2],[363.98,26.25,1],[368.20,26.48,2],[371.72,26.48,2],[383.91,26.48,1]]}
				]
			}
		]
	}
})";
#endif

int main(int argc, const char* argv[])
{
#if _WINDOWS
	char drive[MAX_PATH];
	char dir[MAX_PATH];
	char filename[MAX_PATH];
	char ext[MAX_PATH];
	_splitpath(argv[0], drive, dir, filename, ext);

	std::string root;
	root += drive;
	root += dir;

	::SetCurrentDirectory(root.c_str());
#endif

	int w = 1920, h = 1080;

	auto app = octoon::GameApp::instance();
	app->open(nullptr, w, h, w, h);
	app->start();

	auto object = std::make_shared<octoon::GameObject>();
	object->addComponent<PathMeshingComponent>(chars);

	app->update();
}