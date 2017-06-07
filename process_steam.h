#include <iostream>

#include <steam_api.h>
#include <isteamugc.h>


class WorkshopUploader
{
public:
    WorkshopUploader();

    void create_item(AppId_t game);

    void create_item();

    void create_callback(CreateItemResult_t *result, bool _bool);

    void submit_callback(SubmitItemUpdateResult_t *result, bool _bool);

    CCallResult<WorkshopUploader, CreateItemResult_t> call_result;

    CCallResult<WorkshopUploader, SubmitItemUpdateResult_t> submit_call;

    bool callback_called;
};
