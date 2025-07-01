/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAIInlineKeyboardButton.h
 *
 * This object represents one button of an inline keyboard. Exactly one of the optional fields must be used to specify type of the button.
 */

#ifndef OAIInlineKeyboardButton_H
#define OAIInlineKeyboardButton_H

#include <QJsonObject>

#include "OAICopyTextButton.h"
#include "OAILoginUrl.h"
#include "OAISwitchInlineQueryChosenChat.h"
#include "OAIWebAppInfo.h"
#include <QJsonValue>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIWebAppInfo;
class OAILoginUrl;
class OAISwitchInlineQueryChosenChat;
class OAICopyTextButton;

class OAIInlineKeyboardButton : public OAIObject {
public:
    OAIInlineKeyboardButton();
    OAIInlineKeyboardButton(QString json);
    ~OAIInlineKeyboardButton() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getText() const;
    void setText(const QString &text);
    bool is_text_Set() const;
    bool is_text_Valid() const;

    QString getUrl() const;
    void setUrl(const QString &url);
    bool is_url_Set() const;
    bool is_url_Valid() const;

    QString getCallbackData() const;
    void setCallbackData(const QString &callback_data);
    bool is_callback_data_Set() const;
    bool is_callback_data_Valid() const;

    OAIWebAppInfo getWebApp() const;
    void setWebApp(const OAIWebAppInfo &web_app);
    bool is_web_app_Set() const;
    bool is_web_app_Valid() const;

    OAILoginUrl getLoginUrl() const;
    void setLoginUrl(const OAILoginUrl &login_url);
    bool is_login_url_Set() const;
    bool is_login_url_Valid() const;

    QString getSwitchInlineQuery() const;
    void setSwitchInlineQuery(const QString &switch_inline_query);
    bool is_switch_inline_query_Set() const;
    bool is_switch_inline_query_Valid() const;

    QString getSwitchInlineQueryCurrentChat() const;
    void setSwitchInlineQueryCurrentChat(const QString &switch_inline_query_current_chat);
    bool is_switch_inline_query_current_chat_Set() const;
    bool is_switch_inline_query_current_chat_Valid() const;

    OAISwitchInlineQueryChosenChat getSwitchInlineQueryChosenChat() const;
    void setSwitchInlineQueryChosenChat(const OAISwitchInlineQueryChosenChat &switch_inline_query_chosen_chat);
    bool is_switch_inline_query_chosen_chat_Set() const;
    bool is_switch_inline_query_chosen_chat_Valid() const;

    OAICopyTextButton getCopyText() const;
    void setCopyText(const OAICopyTextButton &copy_text);
    bool is_copy_text_Set() const;
    bool is_copy_text_Valid() const;

    QJsonValue getCallbackGame() const;
    void setCallbackGame(const QJsonValue &callback_game);
    bool is_callback_game_Set() const;
    bool is_callback_game_Valid() const;

    bool isPay() const;
    void setPay(const bool &pay);
    bool is_pay_Set() const;
    bool is_pay_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_text;
    bool m_text_isSet;
    bool m_text_isValid;

    QString m_url;
    bool m_url_isSet;
    bool m_url_isValid;

    QString m_callback_data;
    bool m_callback_data_isSet;
    bool m_callback_data_isValid;

    OAIWebAppInfo m_web_app;
    bool m_web_app_isSet;
    bool m_web_app_isValid;

    OAILoginUrl m_login_url;
    bool m_login_url_isSet;
    bool m_login_url_isValid;

    QString m_switch_inline_query;
    bool m_switch_inline_query_isSet;
    bool m_switch_inline_query_isValid;

    QString m_switch_inline_query_current_chat;
    bool m_switch_inline_query_current_chat_isSet;
    bool m_switch_inline_query_current_chat_isValid;

    OAISwitchInlineQueryChosenChat m_switch_inline_query_chosen_chat;
    bool m_switch_inline_query_chosen_chat_isSet;
    bool m_switch_inline_query_chosen_chat_isValid;

    OAICopyTextButton m_copy_text;
    bool m_copy_text_isSet;
    bool m_copy_text_isValid;

    QJsonValue m_callback_game;
    bool m_callback_game_isSet;
    bool m_callback_game_isValid;

    bool m_pay;
    bool m_pay_isSet;
    bool m_pay_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIInlineKeyboardButton)

#endif // OAIInlineKeyboardButton_H
