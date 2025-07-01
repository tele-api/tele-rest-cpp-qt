/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
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
 * OAIUser.h
 *
 * This object represents a Telegram user or bot.
 */

#ifndef OAIUser_H
#define OAIUser_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {

class OAIUser : public OAIObject {
public:
    OAIUser();
    OAIUser(QString json);
    ~OAIUser() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getId() const;
    void setId(const qint32 &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    bool isIsBot() const;
    void setIsBot(const bool &is_bot);
    bool is_is_bot_Set() const;
    bool is_is_bot_Valid() const;

    QString getFirstName() const;
    void setFirstName(const QString &first_name);
    bool is_first_name_Set() const;
    bool is_first_name_Valid() const;

    QString getLastName() const;
    void setLastName(const QString &last_name);
    bool is_last_name_Set() const;
    bool is_last_name_Valid() const;

    QString getUsername() const;
    void setUsername(const QString &username);
    bool is_username_Set() const;
    bool is_username_Valid() const;

    QString getLanguageCode() const;
    void setLanguageCode(const QString &language_code);
    bool is_language_code_Set() const;
    bool is_language_code_Valid() const;

    bool isIsPremium() const;
    void setIsPremium(const bool &is_premium);
    bool is_is_premium_Set() const;
    bool is_is_premium_Valid() const;

    bool isAddedToAttachmentMenu() const;
    void setAddedToAttachmentMenu(const bool &added_to_attachment_menu);
    bool is_added_to_attachment_menu_Set() const;
    bool is_added_to_attachment_menu_Valid() const;

    bool isCanJoinGroups() const;
    void setCanJoinGroups(const bool &can_join_groups);
    bool is_can_join_groups_Set() const;
    bool is_can_join_groups_Valid() const;

    bool isCanReadAllGroupMessages() const;
    void setCanReadAllGroupMessages(const bool &can_read_all_group_messages);
    bool is_can_read_all_group_messages_Set() const;
    bool is_can_read_all_group_messages_Valid() const;

    bool isSupportsInlineQueries() const;
    void setSupportsInlineQueries(const bool &supports_inline_queries);
    bool is_supports_inline_queries_Set() const;
    bool is_supports_inline_queries_Valid() const;

    bool isCanConnectToBusiness() const;
    void setCanConnectToBusiness(const bool &can_connect_to_business);
    bool is_can_connect_to_business_Set() const;
    bool is_can_connect_to_business_Valid() const;

    bool isHasMainWebApp() const;
    void setHasMainWebApp(const bool &has_main_web_app);
    bool is_has_main_web_app_Set() const;
    bool is_has_main_web_app_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    bool m_is_bot;
    bool m_is_bot_isSet;
    bool m_is_bot_isValid;

    QString m_first_name;
    bool m_first_name_isSet;
    bool m_first_name_isValid;

    QString m_last_name;
    bool m_last_name_isSet;
    bool m_last_name_isValid;

    QString m_username;
    bool m_username_isSet;
    bool m_username_isValid;

    QString m_language_code;
    bool m_language_code_isSet;
    bool m_language_code_isValid;

    bool m_is_premium;
    bool m_is_premium_isSet;
    bool m_is_premium_isValid;

    bool m_added_to_attachment_menu;
    bool m_added_to_attachment_menu_isSet;
    bool m_added_to_attachment_menu_isValid;

    bool m_can_join_groups;
    bool m_can_join_groups_isSet;
    bool m_can_join_groups_isValid;

    bool m_can_read_all_group_messages;
    bool m_can_read_all_group_messages_isSet;
    bool m_can_read_all_group_messages_isValid;

    bool m_supports_inline_queries;
    bool m_supports_inline_queries_isSet;
    bool m_supports_inline_queries_isValid;

    bool m_can_connect_to_business;
    bool m_can_connect_to_business_isSet;
    bool m_can_connect_to_business_isValid;

    bool m_has_main_web_app;
    bool m_has_main_web_app_isSet;
    bool m_has_main_web_app_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIUser)

#endif // OAIUser_H
