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
 * OAI_getBusinessAccountGifts_post_request.h
 *
 * 
 */

#ifndef OAI_getBusinessAccountGifts_post_request_H
#define OAI_getBusinessAccountGifts_post_request_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {

class OAI_getBusinessAccountGifts_post_request : public OAIObject {
public:
    OAI_getBusinessAccountGifts_post_request();
    OAI_getBusinessAccountGifts_post_request(QString json);
    ~OAI_getBusinessAccountGifts_post_request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getBusinessConnectionId() const;
    void setBusinessConnectionId(const QString &business_connection_id);
    bool is_business_connection_id_Set() const;
    bool is_business_connection_id_Valid() const;

    bool isExcludeUnsaved() const;
    void setExcludeUnsaved(const bool &exclude_unsaved);
    bool is_exclude_unsaved_Set() const;
    bool is_exclude_unsaved_Valid() const;

    bool isExcludeSaved() const;
    void setExcludeSaved(const bool &exclude_saved);
    bool is_exclude_saved_Set() const;
    bool is_exclude_saved_Valid() const;

    bool isExcludeUnlimited() const;
    void setExcludeUnlimited(const bool &exclude_unlimited);
    bool is_exclude_unlimited_Set() const;
    bool is_exclude_unlimited_Valid() const;

    bool isExcludeLimited() const;
    void setExcludeLimited(const bool &exclude_limited);
    bool is_exclude_limited_Set() const;
    bool is_exclude_limited_Valid() const;

    bool isExcludeUnique() const;
    void setExcludeUnique(const bool &exclude_unique);
    bool is_exclude_unique_Set() const;
    bool is_exclude_unique_Valid() const;

    bool isSortByPrice() const;
    void setSortByPrice(const bool &sort_by_price);
    bool is_sort_by_price_Set() const;
    bool is_sort_by_price_Valid() const;

    QString getOffset() const;
    void setOffset(const QString &offset);
    bool is_offset_Set() const;
    bool is_offset_Valid() const;

    qint32 getLimit() const;
    void setLimit(const qint32 &limit);
    bool is_limit_Set() const;
    bool is_limit_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_business_connection_id;
    bool m_business_connection_id_isSet;
    bool m_business_connection_id_isValid;

    bool m_exclude_unsaved;
    bool m_exclude_unsaved_isSet;
    bool m_exclude_unsaved_isValid;

    bool m_exclude_saved;
    bool m_exclude_saved_isSet;
    bool m_exclude_saved_isValid;

    bool m_exclude_unlimited;
    bool m_exclude_unlimited_isSet;
    bool m_exclude_unlimited_isValid;

    bool m_exclude_limited;
    bool m_exclude_limited_isSet;
    bool m_exclude_limited_isValid;

    bool m_exclude_unique;
    bool m_exclude_unique_isSet;
    bool m_exclude_unique_isValid;

    bool m_sort_by_price;
    bool m_sort_by_price_isSet;
    bool m_sort_by_price_isValid;

    QString m_offset;
    bool m_offset_isSet;
    bool m_offset_isValid;

    qint32 m_limit;
    bool m_limit_isSet;
    bool m_limit_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAI_getBusinessAccountGifts_post_request)

#endif // OAI_getBusinessAccountGifts_post_request_H
